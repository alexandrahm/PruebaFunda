#include <iostream>
#include <string>
using namespace std;
void Entrada(costoPorArticulo Articulos[], int Articulo);
void Salida(costoPorArticulo Articulos[], int n);
const int longCad =20;
struct costoPorArticulo{
    char nombreArticul[longCad+1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};
int main (){
cout<<"Tenemos disponible los siguientes articulos: "<<endl<<"Pan, manzanas, leche, pastas, aceite, huevos, fresas, tomates, cebolla, chile, cafe, peras y queso"<<endl;
int n, opcion;
cout<<"Ingrese la cantidad de articulos diferentes: "<<endl;
cin>>n;

Articulos[n];
    cin.ignore();
        cout << "Opciones del articulo " << i+1 << endl;
        cout << "1.Datos del articulo" << endl;
        cout << "2.Calcular costo por el articulo" << endl;
        cout << "3.Mostrando informacion del articulo" << endl;
        if(n>1){
        cout << "4.Siguiente articulo" << endl;
        }
        cout << "5.Salir";
        cin >> opcion;
    while(opcion!=5){
        switch(opcion){
            case 1: 
                Entrada(Articulos,i);
            break;
            case 3:
                Salida(Articulos,n);
            break;
            case 4:
                i++;
            break;
            case 5:
                i = 5;
            break;

        }

    }
    return 0;
}

void Entrada(costoPorArticulo Articulos[], int Articulo){
    string Nombre;
    int Unidades;
    float Precio;
    cout << "Nombre del articulo" << endl;
    getline(cin,Nombre,"\n");
    cout << "Cantidad de unidades" << endl;
    getline(cin,Unidades,"\n");
    cout << "Precio de la unidad" << endl;
    getline(cin,Precio,"\n");
    Articulos[Articulo].nombreArticul = Nombre;
    Articulos[Articulo].cantidad = Unidades;
    Articulos[Articulo].precio = Precio;

}

void Salida(costoPorArticulo Articulos[], int n){
    for(int i=0;i<n;i++){
        cout << "Articulo" << i+1 << endl;
        cout << "Nombre del articulo: " << Articulos[i].nombreArticul << endl;
        cout << "Cantidad de unidades: " << Articulos[i].cantidad << endl;
        cout << "Precio de la unidad: " << Articulos[i].precio << endl;
    }
}
}