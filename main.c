#include <stdio.h>
#include "racionais.h"

int main(void){
    printf("Olá, Mundo!\n");

    Tq q1, q2, resultado;

    q1.num = 1;
    q1.den = 2;

    q2.num = 1;
    q2.den = 2;

    resultado = somaTq(q1,q2);
    printf("%d / %d\n", resultado.num, resultado.den);
    return 0;
}