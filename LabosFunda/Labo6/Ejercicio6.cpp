#include <iostream>
using namespace std;
void LeerArreglo(int array[], int elementos);
void Busqueda(int array[], int Numero, int tamano);
int connrepite=0;
int main(){
    int tamano,nrepite;
    cout << "Tamono del arreglo: " << endl;
    cin >> tamano;
    int array[tamano];
    cout << "Numero a repetirse: " << endl;
    cin >> nrepite;
    LeerArreglo(array,tamano);
    Busqueda(array,nrepite,tamano);
    cout << "El numero " << nrepite << " se repite " << connrepite << " veces" << endl;
}
void LeerArreglo(int array[], int elementos){
    int numero;
    for(int i=0;i<elementos;i++){
        cout << "Valor en la posicion " << i << endl; 
        cin >> numero;
        array[i] = numero;
    }
}
void Busqueda(int array[], int Numero, int tamano){
    for(int i=0;i<tamano;i++){
        if(array[i]==Numero){
            connrepite++;
        }
    }
}