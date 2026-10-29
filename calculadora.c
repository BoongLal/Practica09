/*Ramírez Sańchez Valeria Irais
Practica 09*/
#include <stdio.h>
float suma(float n1, float n2);
float resta(float n1, float n2);
float multi(float n1, float n2);
float divi(float n1, float n2);
void main(){
    int elec = 0;
    float n1, n2;
    float res;
    do {
        printf("Elige una operación;\n");
        printf("1-Suma\n");
        printf("1-Resta\n");
        printf("1-Multiplicación\n");
        printf("1-División\n");
        printf("Elige.");
        scanf("%f", &elec);
    }while(elec<1 ||elec>4);
    printf("Dame la primera cifra:");
    scanf("%f", &n1);
    printf("Dame la segunda cifra:");
    scanf("%f", &n2);
    switch(elec){
        case 1:
            res=suma(n1,n2);
            break;
        case 2:
            res=resta(n1,n2);
            break;
        case 3:
            res=multi(n1,n2);
            break;
        case 4:
            res=divi(n1,n2);
            break;
    }
    printf("El resultado es %f", res);
}
float suma(float n1, float n2){
    float res;
    res=n1+n2;
    return res;
}
float resta(float n1, float n2){
     float res;
    res=n1-n2;
    return res;
}
float multi(float n1, float n2){
     float res;
    res=n1*n2;
    return res;
}
float divi(float n1, float n2){
     float res;
    res=n1/n2;
    return res;
}
