#include <iostream>
using namespace std;
void LeerArreglo(int array[], int elementos);
void DesplegarResultado(int array[], int elementos);
void SumaArreglos(int array0[], int array1[], int elementos0, int elementos1, int array3[]);
int main(){
    int tamano1,tamano2,tamano3;
    cout << "Ingrese el tamano del primer arreglo: " << endl;
    cin >> tamano1;
    cout << "Ingrese el tamano del segundo arreglo: " << endl;
    cin >> tamano2;
    if(tamano2>tamano1){
        tamano3 = tamano2;
    }else{
        tamano3 = tamano1;
    }
    int array0[tamano1], array1[tamano2], array3[tamano3]; 
    cout << "Primer Arreglo" << endl;
    LeerArreglo(array0,tamano1);
    cout << "\nSegundo Arreglo" << endl;
    LeerArreglo(array1,tamano2);
    SumaArreglos(array0,array1,tamano1,tamano2,array3);
    DesplegarResultado(array3,tamano3);

    return 0;
}

void LeerArreglo(int array[], int elementos){
    int numero;
    for(int i=0;i<elementos;i++){
        cout << "Valor en la posicion " << i << endl; 
        cin >> numero;
        array[i] = numero;
    }
}

void SumaArreglos(int array0[], int array1[], int elementos0, int elementos1, int array3[]){
    if(elementos1>elementos0){
        for(int i=0; i<elementos1; i++){
            if(i<=elementos0-1){
                array3[i] = array0[i]+array1[i];
            }else{
                array3[i] = array1[i];
            }
        }
    }else{
        for(int a=0; a<elementos0; a++){
            if(a<=elementos1-1){
                array3[a] = array0[a]+array1[a];
            }else{
                array3[a] = array0[a];
            }
        }
    }
}

void DesplegarResultado(int array[], int elementos){
    for(int a=0;a<elementos;a++){
        cout << "Array posicion numero " << a << " " << array[a] << endl;
    }

}