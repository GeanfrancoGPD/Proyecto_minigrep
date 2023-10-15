#include<iostream>
#include<fstream>

using namespace std;

int main (){
    ifstream archivo;
    ofstream outfile;
    string value;

    archivo.open("../mi_carpeta/oracion.txt", ios::in);

    if(!archivo){
        cout << "No se encontro" << endl;
        return 0;
    }else{
        cout << "Se encontro" << endl;
    }

    while(archivo.good()){
        archivo >> value;
        cout << value << " ";
    }

}