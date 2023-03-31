#include <iostream>

using namespace std;
void ejercicio1(){
    int conjunto[10]={1,2,3,4,5,6,7,8,9,10},f=10, sum=0;
    for (int i = 0; i < f; ++i) {
        sum+=conjunto[i];
    }
    cout <<"La suma es: "<<sum<<endl;
}

void ejercicio2(){
    int conjunto[6],M=6,m=0;
    cout <<"Escriba 6 numeros: "<<endl;
    for (int i = 0; i < M; i++) {
        cout <<i+1<<". Digite un numero: "<<endl;
        cin >> conjunto[i];
        if (conjunto[i]>m){
            m=conjunto[i];
        }
    }
    cout <<"El numero mayor es: "<<m<<endl;
}

void ejercicio3(){
    int conjunto[8]={1,2,3,4,5,6,7,8},f=8;

    cout <<"El orden inverso de los numeros es: "<<conjunto[7]<<","<<conjunto[6]<<","<<conjunto[5]<<","<<conjunto[4]<<","<<conjunto[3]<<","<<conjunto[2]<<","<<conjunto[1]<<","<<conjunto[0]<<"."<<endl;
    }

void ejercicio4(){
    int conjunto[10], s=10,suma=0;
    cout <<"Digite 10 numeros: "<<endl;
    for (int i = 0; i < s; i++) {
        cout <<i+1<<". Digite un numero: "<<endl;
        cin >> conjunto[i];
    }
    for (int i = 0; i < s; i++) {
        suma+=conjunto[i];
    }
    cout <<"La suma de los numeros es: "<<suma<<endl;
}

void ejercicio5(){
    string frutas[9]={"fresa","sandia","melon","fresa","naranja","melon","mango","naranja","fresa"};
    string fruta1="fresa",fruta2="sandia",fruta3="melon",fruta4="naranja",fruta5="mango";
    int repetidas1=0,repetidas2=0,repetidas3=0,repetidas4=0,repetidas5=0;
    for (int i = 0; i < sizeof (frutas)/sizeof(frutas[9]); i++) {
        if (frutas[i]==fruta1){
            repetidas1++;
        }
        if (frutas[i]==fruta2){
            repetidas2++;
        }
        if (frutas[i]==fruta3){
            repetidas3++;
        }
        if (frutas[i]==fruta4){
            repetidas4++;
        }
        if (frutas[i]==fruta5){
            repetidas5++;
        }

    }
    cout<<"La fruta: "<<fruta1<<" aparece "<<repetidas1<<" veces."<<endl;
    cout<<"La fruta: "<<fruta2<<" aparece "<<repetidas2<<" veces."<<endl;
    cout<<"La fruta: "<<fruta3<<" aparece "<<repetidas3<<" veces."<<endl;
    cout<<"La fruta: "<<fruta4<<" aparece "<<repetidas4<<" veces."<<endl;
    cout<<"La fruta: "<<fruta5<<" aparece "<<repetidas5<<" veces."<<endl;
}