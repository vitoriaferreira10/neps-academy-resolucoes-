/*
 ============================================================================
 Name        : Par ou Impar
 Author      : Vitoria Ferreira da Silva
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C que leia dois números como entrada e exiba se 
               é par(Bino) ou impar(Cino)
 ============================================================================
 */
 
#include <stdio.h>

int par(int n){
    return n % 2 == 0;
}

int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    if( par(a+b) ){
        printf("Bino\n");
    } else {
        printf("Cino\n");
    }
}
