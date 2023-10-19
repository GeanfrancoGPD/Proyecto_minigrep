#include<iostream>
#include<fstream>
#include<windows.h>

using namespace std;

int main (int argc, char* argv[]){
    ifstream archivo;
    ofstream outfile;
    string value;
    string palabra;
    int cont = 0;
    int x = 0;
    int resp = 0;

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    
    resp = stoi(argv[3]);

    if (resp == 1 ){
        archivo.open("../mi_carpeta/archivo_fuera.txt", ios::in);
    }else if(resp == 2){
        archivo.open("archivo_dentro.txt", ios::in);
    }else {
        cout << "Ingreso un numero incorrecto" << endl;
        return 0;
    }

    if(!archivo){
        cout << "No se encontro" << endl;
        return 0;
    }else{
        cout << "Se encontro" << endl;
    }

    palabra = argv[1]; //para leer la palabra
    x = stoi(argv[2]); //para leer el numero del color 

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
            default : //blanco
            if (palabra == value){
        	  SetConsoleTextAttribute(h,7);
        	 cout <<value << " ";
                cont = cont + 1;
		    }else{
			   cout << value;
			   cout << " ";
		    }
        }
    }
    cout << " " << endl;
    cout << "Se encontraron " << cont << " coincidencias " << endl;
}