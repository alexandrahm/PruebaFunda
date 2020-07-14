#include <iostream>
#include <string>
using namespace std;
const int longCad = 20;
struct costoPorArticulo
{//struct a utilizar 
    string nombreArticul;
    int cantidad;
    float precio;
    float costoPorArticulo;
} Articulos[20];
//todas las funciones a utilizar a partir del struct
void entrada(costoPorArticulo Articulos[], int Articulo);
void costo(costoPorArticulo Articulos[], int n);
void salida(costoPorArticulo Articulos[], int n);
void total(costoPorArticulo Articulos[], int n);
int main()
{ //main
    int n, opcion;
    cout << "Ingrese la cantidad de articulos diferentes: " << endl;
    cin >> n;
    entrada(Articulos, n);
    costo(Articulos, n);
    salida(Articulos, n);
    total(Articulos, n);
    return 0;
}
void entrada(costoPorArticulo Articulos[], int n)
{ //entrada de datos
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese nombre del articulo: ";
        cin >> Articulos[i].nombreArticul;
        cout << "Ingrese precio unitario: ";
        cin >> Articulos[i].costoPorArticulo;
        cout << "Ingrese la cantidad: ";
        cin >> Articulos[i].cantidad;
        Articulos[i].precio = Articulos[i].cantidad * Articulos[i].costoPorArticulo;//se guardara hasta la funcion costoPorArticulo
    }
}
void salida(costoPorArticulo Articulos[], int n)
{ //salida de datos
    for (int i = 0; i < n; i++)
    {
        cout << "Articulo" << i + 1 << endl;
        cout << "Nombre del articulo: " << Articulos[i].nombreArticul << endl;
        cout << "Cantidad de unidades: " << Articulos[i].cantidad << endl;
        cout << "Precio de la unidad: " << Articulos[i].precio << endl;
    }
}
void costo(costoPorArticulo Articulos[], int n)
{ //calculo del costo por articulo
    for (int i = 0; i < n; i++)
    {
        cout << Articulos[i].nombreArticul << " precio: " << Articulos[i].precio << endl;
    }
}
void total(costoPorArticulo Articulos[], int n)
{ //funcion del costo total de la compra
    float total;
    for (int i = 0; i < n; i++)
    {
        total += Articulos[i].precio; //cada dato en articulos[i].precio se irá sumando
    }
    cout << "su total es: " << total << endl;
}