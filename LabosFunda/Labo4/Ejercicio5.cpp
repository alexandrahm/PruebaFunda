#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Ingrese un numero real: "<<endl;
    cin>>n;
    if(n<0){
        cout<<"Es un numero negativo";
    }else if(n>0){
        cout<<"Es un numero positivo";
    }else if(n==0){
        cout<<"El numero es 0";
    }else{
        cout<<"valor no valido";
    }
    return 0;
}