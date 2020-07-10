#include <iostream>
#include <string>
using namespace std;
const int longCad =20;
struct costoPorArticulo{
    string nombreArticul;
    int cantidad;
    float precio;
    float costoPorArticulo;
} Articulos[20];
void entrada(costoPorArticulo Articulos[], int Articulo);
void costo(costoPorArticulo Articulos[], int n);
void salida(costoPorArticulo Articulos[], int n);
void total(costoPorArticulo Articulos[],int n);
int main (){
int n, opcion;
cout<<"Ingrese la cantidad de articulos diferentes: "<<endl;
cin>>n;
    entrada(Articulos, n);
    costo(Articulos, n);
    salida(Articulos, n);
    total(Articulos, n);
    return 0;
}
void entrada(costoPorArticulo Articulos[], int n){
     //costoPorArticulo Articulos;
     for(int i=0; i<n;i++){
        float costo;
        int cantidad;
        cout<<"Ingrese nombre del articulo: ";
        //getline (cin,Articulos[i].nombreArticul);
        cin>>Articulos[i].nombreArticul;
        cout<<"Ingrese precio unitario: ";
        cin>>Articulos[i].costoPorArticulo;
        cout<<"Ingrese la cantidad: ";
        //getline (cin,Articulos[i].cantidad);
        cin>>Articulos[i].cantidad;
        Articulos[i].precio=Articulos[i].cantidad*Articulos[i].costoPorArticulo;
    }
}
void salida(costoPorArticulo Articulos[], int n){
    for(int i=0;i<n;i++){
        cout << "Articulo" << i+1 << endl;
        cout << "Nombre del articulo: " << Articulos[i].nombreArticul << endl;
        cout << "Cantidad de unidades: " << Articulos[i].cantidad << endl;
        cout << "Precio de la unidad: " << Articulos[i].precio << endl;
    }
}
void costo(costoPorArticulo Articulos[], int n){
    for(int i=0; i<n; i++){
        cout<<Articulos[i].nombreArticul<<" precio: "<<Articulos[i].precio<<endl;
    }
}
void total(costoPorArticulo Articulos[],int n){
    float total;
    for(int i=0; i<n; i++){
        total+=Articulos[i].precio;
    }
    cout<<"su total es: "<<total<<endl;
}