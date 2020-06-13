#include <iostream>
using namespace std;
int main(){
    int pais;
    double cantidad, IVA;
    cout<<"Escoja el numero del pais que desea calcular IVA: "<<endl;
    cout<<"1) El Salvador"<<endl;
    cout<<"2) Guatemala"<<endl;
    cout<<"3) Honduras"<<endl;
    cout<<"4) Espana"<<endl;
    cout<<"Ingrese el numerp del pais a calcular IVA: ";
    cin>>pais;
    cout<<"Ingrese cantidad a entrar: ";
    cin>>cantidad; 
    switch(pais){
        case 1:
        IVA=(cantidad*13)/100;
        break;
        case 2:
            IVA=(cantidad*9)/100;
            
            break;
        case 3:
            IVA =(cantidad*15)/100;
            
            break;
        case 4:
            IVA=(cantidad*20)/100;
          
            break;
        default:
        cout<<"Pais incorrecto";
        }
        cout<<"La cantidad a pagar es: "<<IVA;
        return 0;
    }