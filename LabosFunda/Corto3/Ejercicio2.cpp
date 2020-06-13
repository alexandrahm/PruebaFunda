#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int numeromagico();//n para ingresar numero y ns numero secreto generado
//iniciando valor random
int numeromagico(){
   srand (time(NULL));
  //numero random entre 1 y 100
  int ns = rand() % 100 + 1;
 //Termino inicializacion del random
 // cout<<ns<<endl; para saber el valor del numero magico  
 return ns;
} 
int main(){
      int n;
      n=0;
      int nm=numeromagico();
   for (int i=1; i<=5; i++){
      cout<<"Ingrese un valor de 1 a 100: "<<endl;
      cin>>n;
      if (nm>n){
         cout<<"El numero ingresado es menor al numero magico"<<endl;
      }else  if(nm<n){
         cout<<"El numero ingresado es mayor al numero magico"<<endl;
      }else{
         cout<<"Ganaste"<<endl;
         break;
      }
      if (n==0){
         cout<<"Regresa pronto";
         break;
      }
      if(i==5){
         cout<<"Perdiste";
      }
   }

}