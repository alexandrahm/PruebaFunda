#include <iostream>
using namespace std;
int salarios(float hn,float hx);//donde hn son horas normales, hx horas extras
int main(){
    float hn, hx;
    hn=0;
    hx=0;
    cout<<"Ingrese horas trabajadas: "<<endl;
    cin>>hn;
    cout<<"Ingrese horas extra: "<<endl;
    cin>>hx;
    salarios(hn, hx);
    return 0;
}int salarios(float hn, float hx){
    float afp,r, s;//r de renta y s de seguro
    afp=0.625;
    r=0.10;
    s=0.04;
    float salario, total;
    salario=0;
    total=0;
    salario=(hn*1.75)+(hx*2.50);//salario total sin descuentos
    if(salario>=500){
        total=salario-(salario*0.625)-(salario*0.10)-(salario*0.04);//salario con descuento y tambien de renta
    }else{
        total=salario-(salario*0.625)-(salario*0.04);//salario de descuento y sin renta
    }
    cout<<total<<endl;//salario total con o sin descuento (depende del resultado de salario)
}