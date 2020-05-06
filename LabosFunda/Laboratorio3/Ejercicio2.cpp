#include <iostream>
using namespace std;
int main(){
    float r, pi, area, perimetro;
    cout<<"Ingrese el radio: ";
    cin>> r;
    pi=3.1416;
    area = pi*r*r;
    perimetro = 2*pi*r;
    cout<<"\n El perimetro es: "<<perimetro;
    cout<<"\n El area es: "<<area;
    return 0;
}

