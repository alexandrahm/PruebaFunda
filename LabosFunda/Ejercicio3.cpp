#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a, b, c, d, raiz, denominador, x1, x2;
    cout<< "Ingrese a: ";
    cin>> a;
    cout<<"Ingrese b: ";
    cin>> b;
    cout<< "Ingrese c: ";
    cin>> c;
    d= pow(b,2)-(4*a*c);
    raiz=sqrt(d);
    denominador= 2*a;
    x1=(-b+raiz)/denominador;
    x2=(-b-raiz)/denominador;
    cout<<"\n X1= "<<x1;
    cout<<"\n X2= "<<x2;
    return 0;
}
