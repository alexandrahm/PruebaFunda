#include <iostream>
#include <math.h>
using namespace std;
int main(){
 int numero, divisor;
cout<<"Ingrese numero a dividir: ";
cin>> numero;
cout<<"Ingrese divisor: ";
cin>>divisor;
if ((numero%divisor==0)&&(divisor!=0))
{
    cout<< "Es divisible";
}else{
    cout<< "No es divisible";
}
return 0;
}
