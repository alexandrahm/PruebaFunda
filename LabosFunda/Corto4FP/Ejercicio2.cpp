#include <iostream>
using namespace std;
double Media(double Est[]);//Est=Estaturas
void EstAyD(double Est[], int mea, int med, double m); //mea=media de estaturas arriba, med== media de estaturas debajo
int main()
{
    int mea = 0, med = 0;
    double Entrada;
    double Estatura[25];
    double m; //media
    cout << "Promedio de Estatura de 25 Alumnos" << endl;
    for (int i = 0; i < 25; i++)
    {
        cout << "Estatura del Alumno " << i + 1 << endl;
        cin >> Entrada;
        Estatura[i] = Entrada;
    }
    m = Media(Estatura);
    cout << "La media es " << m << endl;
    EstAyD(Estatura, mea, med, m);
}

double Media(double Est[])
{
    double Todas; //Todas las estaturas
    Todas = 0;
    for (int i = 0; i < 25; i++)
    {
        Todas += Est[i];
    }
    Todas = Todas / 25;
    return Todas;
}

void EstAyD(double Est[], int mea, int med, double m)
{
    for (int i = 0; i < 25; i++)
    {
        if (Est[i] > m)
        {
            mea++;
        }
        else if (Est[i] == m)
        {
            mea++;
        }
        else if (Est[i] < m)
        {
            med++;
        }
    }
    cout << "Estaturas que se encuentran Arriba de la media: " << mea << endl;
    cout << "Estaturas que se encuentran Abajo de la media: " << med << endl;
}