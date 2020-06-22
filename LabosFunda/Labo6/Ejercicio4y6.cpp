#include <iostream>
using namespace std;
void leerArreglo(int ar[], int elm);
void desplegarResultado(int ar[], int elm);
void sumaArreglos(int a1[], int a2[], int elm1, int elm2, int a3[]);
int* lArreglo(int el);
void busqueda(int a[], int nm, int t);
int main(){
    int e=0;
    cout<<"Ejercicio 1--> 2 arreglos de igual longitud"<<endl<<"Ejercicio --> repeticion de numeros en un arreglo"<<endl;
    cout<<"Ingrese el numero (1 o 2) del ejercicio que desee ejecutar: "<<endl;
    cin>>e;
    switch(e){
    case 1: {
    int t1=0,t2=0,t3=0;
    cout << "Ingrese el tamano del primer arreglo: " << endl;
    cin >> t1;
    cout << "Ingrese el tamano del segundo arreglo: " << endl;
    cin >> t2;
    if(t2>t1){
        t3 = t2;
    }else{
        t3 = t1;
    }
    int a1[t1], a2[t2], a3[t3]; 
    cout << "Primer Arreglo" << endl;
    leerArreglo(a1,t1);
    cout << "Segundo Arreglo" << endl;
    leerArreglo(a2,t2);
    sumaArreglos(a1,a2,t1,t2,a3);
    desplegarResultado(a3,t3);

    return 0;
break;
    }
    case 2:{
    int cont=0;
    int t,nr;
    cout << "Ingrese tamaño del arreglo: " << endl;
    cin >> t;
    cout << "Numero que desea verificar: " << endl;
    cin >> nr;
    int *a= lArreglo(t);
    busqueda(a, nr,t);
    cout << "El numero " << nr << " se repite " << cont << " veces" << endl;
break;
    }
    default:
        cout<<"Valor no valido"<<endl;
    } 
}

void leerArreglo(int ar[], int elm){
    int numero;
    for(int i=0;i<elm;i++){
        cout << "Valor en la posicion " << i << endl; 
        cin >> numero;
        ar[i] = numero;
    }
}

void sumaArreglos(int a1[], int a2[], int elm1, int elm2, int a3[]){
    if(elm2>elm1){
        for(int i=0; i<elm2; i++){
            if(i<=elm1-1){
                a3[i] = a1[i]+a2[i];
            }else{
                a3[i] = a2[i];
            }
        }
    }else{
        for(int a=0; a<elm1; a++){
            if(a<=elm2-1){
                a3[a] = a1[a]+a2[a];
            }else{
                a3[a] = a1[a];
            }
        }
    }
}

void desplegarResultado(int ar[], int elm){
    for(int a=0;a<elm;a++){
        cout << "Arreglo de posicion " << a << " " << ar[a] << endl;
    }

}



int * lArreglo(int el){
    int a[el];
    int nm;
    for(int i=0;i<el;i++){
        cout << "Valor en la posicion " << i << endl; 
        cin >> nm;
        a[i] = nm;
    }
    return a;
}
void busqueda(int a[], int nm, int t, int cont){
    for(int i=0;i<t;i++){
        if(a[i]==nm){
            cont++;
        }
    }
}
