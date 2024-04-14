#include<iostream>

using namespace std;

int main() {

string dia;
int Dia;
int dn;

cout<<"ingrese un dia de la semana para saber si tiene programacion: lunes, marte, miercoles, jueves, viernes, sabado y domingo. " <<endl;
cin>> dia;

if (dia == "lunes") {
    dn = 1;
} else if (dia == "martes"){
    dn = 2;
}else if (dia == "miercoles"){
    dn = 3;
}else if (dia == "jueves"){
    dn = 4;
}else if (dia == "viernes"){
    dn = 5;
} else{
     dn=6;
}

switch(dn) {

case 1:
    cout<<" hoy no tiene clases de programacion. ";
    break;

case 2:
    cout<<" hoy no tiene clases de programacion. ";
    break;

case 3:
    cout<<" hoy no tiene clases de programacion. ";
    break;

case 4:
    cout<<" hoy si tiene clases de programacion. ";
    break;

case 5:
    cout<<" hoy si tiene clases de programacion. ";
    break;

default:
    cout<<"es fin de semana, puede descansar. ";
           }

return 0;

}
