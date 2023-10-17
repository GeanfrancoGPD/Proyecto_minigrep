#include<iostream>
#include<fstream>
#include<windows.h>

using namespace std;

int main (){
    ifstream archivo;
    ofstream outfile;
    string value;
    string palabra;
    int cont = 0;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    archivo.open("../mi_carpeta/oracion.txt", ios::in);

    if(!archivo){
        cout << "No se encontro" << endl;
        return 0;
    }else{
        cout << "Se encontro" << endl;
    }

    cout << "Ing.la palabra:"<< endl;;
    cin >>palabra;


    while(archivo.good()){
    	
        archivo >> value;
        if (palabra == value){
        	SetConsoleTextAttribute(h,5);
        	cout <<value << " ";
        		SetConsoleTextAttribute(h,7);
                cont = cont + 1;
		}else{
			
			
			cout << value;
			cout << " ";
		}
        
    }
    
    cout << " " << endl;
    cout << "Se repitio la frase: " << cont << " Veces " << endl;



}