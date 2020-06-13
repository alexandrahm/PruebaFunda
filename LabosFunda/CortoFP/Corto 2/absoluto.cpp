#include <iostream>
using namespace std;
int main(){
    float numero, valorabs;
    cout<<"ingrese numero: ";
    cin>>numero;
    if(numero>0){
        valorabs=numero;
        cout<<"valor absoluto: "<<valorabs;
    }else{
        valorabs=-numero;
        cout<<"valor absoluto: "<<valorabs;
    }
    return 0;
}