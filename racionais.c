#include "racionais.h"

Tq somaTq(Tq q1, Tq q2){
    Tq aux;

    aux.num = q1.num*q2.den + q1.den*q2.num;
    aux.den = q1.den*q2.den;

    return aux;
}