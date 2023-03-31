
#include <iostream>
#include "void.h"
using namespace std;

int main (){
    int ejercicio, respuesta=1;
    while (respuesta==1){
        cout <<"Bienvenido, para entrar presione 1"<<endl;
        cin >> respuesta;

        if (respuesta==1){
            cout <<"Seleccione el numero del ejercicio que desea: "<<endl;
            cout <<"1.Suma"<<endl;
            cout <<"2.Mayor"<<endl;
            cout <<"3.Invertir orden"<<endl;
            cout <<"4.Suma 2.0"<<endl;
            cout <<"5.frutas"<<endl;
            cout <<"Ingrese el numero que desea:"<<endl;
            cin >>ejercicio;
            switch (ejercicio) {
                case 1:
                    ejercicio1();
                    cout <<"Desea probar otro ejercicio, 1 para si y 2 para no"<<endl;
                    cin >>respuesta;
                    cout <<"Fin"<<endl;
                    break;
                case 2:
                    ejercicio2();
                    cout <<"Desea probar otro ejercicio, 1 para si y 2 para no"<<endl;
                    cin >>respuesta;
                    cout <<"Fin"<<endl;
                    break;
                case 3:
                    ejercicio3();
                    cout <<"Desea probar otro ejercicio, 1 para si y 2 para no"<<endl;
                    cin >>respuesta;
                    cout <<"Fin"<<endl;
                    break;
                case 4:
                    ejercicio4();
                    cout <<"Desea probar otro ejercicio, 1 para si y 2 para no"<<endl;
                    cin >>respuesta;
                    cout <<"Fin"<<endl;
                    break;
                case 5:
                    ejercicio5();
                    cout <<"Desea probar otro ejercicio, 1 para si y 2 para no"<<endl;
                    cin >>respuesta;
                    cout <<"Fin"<<endl;
                    break;

            }

        } else {
            cout <<"Adios"<<endl;
        }

    }

    return 0;
}

