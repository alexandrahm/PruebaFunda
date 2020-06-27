#include <iostream>
using namespace std;
void Tn(float n[]);//donde n son notas
float cns(float n[], float p, int t); // p=ponderacion y t=tamano
int main()
{
    int t;
    float n[5]; //arreglo de las 5 notas
    float p = 0;
    cout << "Digite el numero de alumnos: " << endl;
    cin >> t;
    float e[t]; //e=estudiantes
    for (int i = 0; i < t; i++)
    {
        Tn(n);
        e[i] = cns(n, p, t);
    }
    for (int x = 0; x < t; x++)
    {
        if (e[x] >= 7.0)
        {
            cout << "Aprobado" << endl;
        }
        else
        {
            cout << "Reprobado" << endl;
        }
    }
}

void Tn(float n[])
{
    float nts; //entrada de notas
    for (int i = 0; i < 5; i++)
    {
        cout << "Digite la nota " << i + 1 << endl;
        cin >> nts;
        n[i] = nts;
    }
}

float cns(float n[], float p, int t)
{
    float operacion;
    for (int i = 0; i < 5; i++)
    {
        operacion = n[i] * 0.20;
        p += operacion;
    }
    return p;
}