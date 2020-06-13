#include <iostream>
using namespace std;
int ab(int a);//ab de año bisiesto
int main(){
    int a;
    cout<<"Ingrese el año: "<<endl;//ingresar el año a probar
    cin>>a;
    ab(a);
    return 0;
}
    int ab(int a){
    if (a%400==0){//si es divisible entre 400
        cout<<"es año bisiesto";
    }else if((a%4 == 0)&&(a%100!=0)){//si es divisible entre 4 y no entre 100
        cout<<"es año bisiesto";
    }else{
        cout<<"no es año bisiesto"; 
    }
    return a;
    }