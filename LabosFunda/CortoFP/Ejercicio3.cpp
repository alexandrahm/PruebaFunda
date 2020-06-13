#include <iostream>
using namespace std;
int main(){
    int color;
    cout<<"Ingrese el numero del color que desee: "<<endl;
    cout<<"1) Rojo"<<endl;
    cout<<"2) Azul"<<endl;
    cout<<"3) Verde"<<endl;
    cout<<"4) Rosa"<<endl;
    cout<<"5) Negro"<<endl;
    cin>>color;
    switch(color){
        case 1: 
        cout<<"Ha ganado 10 dolares :)";
        break;
        case 2: 
        cout<<"Ha ganado 5 dolares :)";
        break;
        case 3: 
        cout<<"Ha ganado 20 dolares :)";
        break;
        case 4: 
        cout<<"Ha ganado 25 dolares :)";
        break;
        case 5:
        cout<<"Ha ganado 50 dolares :)";
        break;
        default: 
        cout<<"Color ingresado incorrecto";
    }
    return 0;
}


    