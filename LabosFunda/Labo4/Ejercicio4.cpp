#include <iostream>
#include <string>
using namespace std;
int main(){
    string palabra;
    cout<<"digite una palabra: ";
    cin>>palabra;
    if(palabra[0]==palabra[palabra.length()-1]){
        cout<<"finaliza con la letra que inicia";
    }else{
        cout<<"no finaliza con la letra que inicia";
    }
    return 0;
}


