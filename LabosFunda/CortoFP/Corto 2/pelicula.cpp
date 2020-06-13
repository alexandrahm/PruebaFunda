#include <iostream>
using namespace std;
int main(){
    int pelicula;
    cout<<"Escoja el numero de la pelicula que desea ver: "<<endl;
    cout<<"1) Pelicula 1 "<<endl;
    cout<<"2) Pelicula 2"<<endl;
    cout<<"3) Pelicula 3"<<endl;
    cout<<"4) Pelicula 4"<<endl;
    cout<<"Ingrese el numero de la pelicula: ";
    cin>>pelicula;
    if(pelicula==1){
        cout<<"pelicula 1, con total de $3";
    }else if(pelicula==2){
        cout<<"pelicula 2, con total de $3.50";
    }else if(pelicula==3){
        cout<<"pelicula 3, con total de $3.10";
    }else if(pelicula==4){
        cout<<"pelicula 4, con total de $3.75";
    }else{
        cout<<"numero incorrecto";
    }
    return 0;
}