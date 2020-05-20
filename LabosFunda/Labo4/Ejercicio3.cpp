#include <iostream>
#include <string>
using namespace std;
int main(){
    string palabra;
    cout<<"Ingrese palabra: ";
    cin>>palabra;
    if(palabra.length()>10){
        cout<<"la palabra es mayor a 10";
    }else{
        cout<<"la palabra es menor a 10";
    }
    if(palabra.length()%2==0){
        cout<<" y tambien es par";
    }else{
        cout<<" y tambien es impar";
    }

    return 0;
}