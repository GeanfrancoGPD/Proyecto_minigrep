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
    int x = 0;

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
    cout << "De que color quieres que se marque la palabra?" << endl;
    cout << "1-rojo" << endl;
    cout << "2-Azul" << endl;
    cout << "3-amarillo" << endl;
    cout << "4-blanco" << endl;
    cin >> x;

    while(archivo.good()){
    	
        archivo >> value;
        
        switch(x){
            case 1 : //rojo
             if (palabra == value){
        	  SetConsoleTextAttribute(h,4);
        	 cout <<value << " ";
        		SetConsoleTextAttribute(h,7);
                cont = cont + 1;
		    }else{
			   cout << value;
			   cout << " ";
		    }
            break;

            case 2: // azul

            if (palabra == value){
        	  SetConsoleTextAttribute(h,9);
        	 cout <<value << " ";
        		SetConsoleTextAttribute(h,7);
                cont = cont + 1;
		    }else{
			   cout << value;
			   cout << " ";
		    }
            break;

            case 3: // amarillo 

            if (palabra == value){
        	  SetConsoleTextAttribute(h,14);
        	 cout <<value << " ";
        		SetConsoleTextAttribute(h,7);
                cont = cont + 1;
		    }else{
			   cout << value;
			   cout << " ";
		    }
            break;

            case 4: //blanco

            if (palabra == value){
        	  SetConsoleTextAttribute(h,7);
        	 cout <<value << " ";
        		SetConsoleTextAttribute(h,7);
                cont = cont + 1;
		    }else{
			   cout << value;
			   cout << " ";
		    }
        }
        
    }
    cout << " " << endl;
    cout << "Se repitio la frase: " << cont << " Veces " << endl;
}