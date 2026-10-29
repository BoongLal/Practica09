/*Ramírez Sańchez Valeria Irais
Practica 09*/
#include <stdio.h>
int main (){
    int lista[10]; // Se declara el arreglo unidimensional
    //el i se declara dentro del for
    int elem=0;
    do{
        printf("\nDa un número entre 1 y 10 para indicar la cantidad de elementos que tiene el arreglo\n");
        scanf("%d", &elem);
    }while(elem<1 || elem>10);//Obliga al usuario a ingresar un número que cumpla lo solicitado
    // Se almacena un número en cada elemento del arreglo unidimensional usando for
    for (int i = 0; i < elem; i++){
            printf("\nDar un número entero para el elemento %d del arreglo ", i+1);
            scanf("%i",&lista[i]);
        }
        printf("Los valores de la lista son:");
        // Se muestra el número almacenado en cada elemento del arreglo unidimensional usando for
        for (int j = 0; j < elem; j++){
            printf("%d ", lista[j]);
        }
        printf("\n\n");
    return 0;
}
