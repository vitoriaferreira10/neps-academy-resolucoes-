/*
 ============================================================================
 Name        : ExercicioC-4 - questao3.c
 Author      : taylor klaus cantalice nobrega
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Programa em C que leia quatro números como entrada e exiba se
               a gangorra esta em equilibrio ou não.
 ============================================================================
 */
 
#include <stdio.h>

int gangorra (esquerdo, direito){
    if(esquerdo == direito){
        return printf("0\n");
    }else if( esquerdo > direito){
        return printf("-1\n");
    }else{
        return printf("1\n");
    }
}

int main(){
    int p1, c1, p2, c2;
    scanf("%d%d%d%d", &p1,&c1,&p2,&c2);
    gangorra(p1*c1, p2*c2);
}
