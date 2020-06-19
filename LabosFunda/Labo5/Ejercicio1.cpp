#include <iostream>
using namespace std;
//ejercicio 1 MCD
int mcd(int x, int y){
    int aux;
    if(x%y==0){
        return y;
    }else{
        while(x%y!=0){
        aux=x;
        x=y;
        y=aux%y;
        if(aux%y==0 && x%y==0){
        return y;
        }
    }
    }
}
//ejercicio 2 Hora 1 segundos despues
int e2()
{
    int h, m, s;
    cout << "Ingrese la hora: " << endl;
    cin >> h;
    cout << "Ingrese los minutos" << endl;
    cin >> m;
    cout << "Ingrese los segundos" << endl;
    cin >> s;
    cout << "Hora: " << h << ":" << m << ":" << s << endl;
    s++;
    if (s == 60)
    {
        s = 0;
        m++;
        if (m == 60)
        {
            m = 0;
            h++;
            if (h == 24)
            {
                h = 0;
            }
        }
    }
    cout << "Hora actual: " << h << ":" << m << ":" << s << endl;
}
//ejercicio 3 bool de año bisiesto
bool bisiesto(int a)
{
    if (a % 400 == 0)
    {
        return true;
    }
    else
    {
        if((a%4 == 0)&&(a%100!=0)){
            return true;
        }else{
            return false;
        }
    }
}
//ejercicio 4 fecha 1 dia despues
int e4()
{
    int d, m, a;
    cout << "Ingrese el dia: ";
    cin >> d;
    cout << "Ingrese mes: ";
    cin >> m;
    cout << "Ingrese año: ";
    cin >> a;
    d++;
    if (a % 400 == 0)
    {
        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) && (d == 32))
        {
            d = 1;
            m++;
        }
        else if (((m == 4 || m == 6 || m == 9 || m == 11) && (d == 31)))
        {
            d = 1;
            m++;
        }
        else if ((m == 2) && (d == 30))
        {
            d = 1;
            m++;
        }
        else if ((m == 12) && (d == 31))
        {
            d = 1;
            m = 1;
            a++;
        }
        else if (a % 400 != 0)
        {
            if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) && (d == 32))
            {
                d = 1;
                m++;
            }
            else if (((m == 4 || m == 6 || m == 9 || m == 11) && (d == 31)))
            {
                d = 1;
                m++;
            }
            else if ((m == 2) && (d == 29))
            {
                d = 1;
                m++;
            }
            else if ((m == 12) && (d == 32))
            {
                d = 1;
                m = 1;
                a++;
            }
        }
    }
    cout << "fecha: " << d << "-" << m << "-" << a << endl;
 return 0;
}
int main(){
    int n=0;
    cout<<"Ejercicio 1--> MCD de un numero"<<endl<<"Ejercicio 2 --> Hora un segundo despues"<<endl<<"Ejercicio 3--> Año bisiesto o no"<<endl<<"Ejercicio 4--> Fecha 1 dia despues"<<endl;
    cout<<"Ingrese el numero (1 al 4) del ejercicio que desee ejecutar: "<<endl;
    cin>>n;
    switch(n){
        case 1:
            int x, y;
            cout<<"Antes de ingresar los numeros por favor verifique que su primer numero sea mayor al segundo :)"<<endl;
            cout << "Ingrese numero x: " << endl;
            cin >> x;
            cout << "Ingrese numero y: " << endl;
            cin >> y;
            cout<<"Con x= "<<x<<" y y= "<<y<<endl;
            cout<<"El MCD es "<<mcd(x,y)<<endl;
            return 0;
        break;
        case 2:
        e2();
        break;
        case 3:
         int a;
         cout << "Ingrese el año: " << endl;
         cin >> a;
        if(bisiesto(a)){
            cout<<"es bisiesto";
        }else{
            cout<<"no es bisiesto";
        }
        break;
        case 4:
        e4();
        break;
        default:
        cout<<"No es un valor valido"<<endl;

    }
}