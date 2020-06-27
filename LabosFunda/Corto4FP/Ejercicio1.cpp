#include <iostream>
#include <cstring>
using namespace std;
void Entrada(char p[], int t); // p=palabra, t=tamaño
void cdlet(char p[], char cod[], int t);//proceso de codificacion de letra
void Salida(char p[], char cod[], int t); //cod es el arreglo que guarda la palabra codificada
int main()
{
    int t;
    cout << "Digite el tamano de palabra a codificar:" << endl;
    cin >> t;
    char p[t];
    char codf[t]; //codificacion
    for (int i = 0; i < t; i++)
    {
        p[i] = 'n';
        codf[i] = 'N';
    }
    Entrada(p, t);
    cdlet(p, codf, t);
    Salida(p, codf, t);

    return 0;
}
void Entrada(char p[], int t)
{ //El usuario ingresa la palabra a codificar
    cout << "Ingrese la palabra que desea codificar" << endl;
    cin.ignore();
    cin.getline(p, t + 1, '\n');
}

void cdlet(char p[], char cod[], int t)
{ //El proceso de codificacion letra por letra
    char Letra = 'N';
    for (int i = 0; i < t; i++)
    {
        Letra = p[i];
        if (Letra == 77 || Letra == 109)
        {
            cod[i] = '0';
        }
        else if (Letra == 85 || Letra == 117)
        {
            cod[i] = '1';
        }
        else if (Letra == 82 || Letra == 114)
        {
            cod[i] = '2';
        }
        else if (Letra == 67 || Letra == 99)
        {
            cod[i] = '3';
        }
        else if (Letra == 73 || Letra == 105)
        {
            cod[i] = '4';
        }
        else if (Letra == 69 || Letra == 101)
        {
            cod[i] = '5';
        }
        else if (Letra == 76 || Letra == 108)
        {
            cod[i] = '6';
        }
        else if (Letra == 65 || Letra == 97)
        {
            cod[i] = '7';
        }
        else if (Letra == 71 || Letra == 103)
        {
            cod[i] = '8';
        }
        else if (Letra == 79 || Letra == 111)
        {
            cod[i] = '9';
        }
        else
        {
            cod[i] = p[i];
        }
    }
}

void Salida(char p[], char cod[], int t)
{
    cout << "La palabra: " << endl;
    for (int x = 0; x < t; x++)
    {
        cout << p[x];
    }
    cout << " Ya codificada es: " << endl;
    for (int y = 0; y < t; y++)
    {
        cout << cod[y];
    }
}