#include <stdio.h>
#include <stdlib.h>
//se ingresan numeros enteros(distintos a cero) hasta que el usuario quiera.
//fflush para resetear el buffer de entrada.
int main()

{   int contador=0;
    int numero=0;
    int numerosPares=0;
    float promedioNegativos;
    int sumaPositivos=0;
    int sumaNegativos=0;
    int max= INT_MAX;
    int min= INT_MIN;
    int h=0;
    int pp;
    int ng;
    int sumatotal=0;
    char seguir ='s'
    float promedioTotal;
    do{
        printf("Ingrese un numero: ");
        scanf("%d", numero);
        contador++;
        sumatotal= sumatotal+numero;
        if(numero%2==0){
            numerosPares++;
        }
        if(numero>=0){
            sumaPositivos=sumaPositivos+numero;
        }
        if(numero<0){
            sumaNegativos=sumaNegativos+numero;
        }
        if(numero<min){
            min=numero;
        }
        else if(numero>max){
            max=numero;
        }
        if(numero>=-10 && numero<=50){
            h++;
        }


    printf("Continuar?");
    scanf(" %c", &seguir);



    }while(seguir=='s');


        printf("\nA) la cantidad de numeros ingresados son: %d" , contador);
        printf("\nB) La cantidad de numeros pares es: %d", numerosPares);
        printf("\nC) La suma de los numeros positivos es: %d", sumaPositivos);
        printf("\nD) El promedio de todos los negativos es: %f" , promedioNegativos);
        printf("\nE) El numero minimo es: %d", min , " y el maximo es ", max);
        printf("\nF) El postivo mas chico es: %d", pp);
        printf("\nG) El negativo mas grande es %d", ng);
        printf("\nH) La cantidad de nuemros que se encuentran entre el -10 y 50 son:", h);
}
