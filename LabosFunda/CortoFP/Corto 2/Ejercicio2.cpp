#include <iostream>
#include <string>
#include<math.h>
using namespace std;
int main(){
    int a, b, c; 
    cout<<"Ingrese a: ";
    cin>>a;    
    cout<<"Ingrese b: ",
    cin>>b;
    cout<<"Ingrese c; ";
    cin>>c;
    if(b==2*sqrt(a)*sqrt(c)){
        cout<<"es trinomio cuadrado perfecto";
    }else{
        cout<<"no es trinommio cuadrado pefecto";
    }
    
    return 0;


}
    