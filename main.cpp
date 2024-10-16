//
// Created by Joshua on 2024/10/16.
//

#include "example.h"


int functionA(){
    int x = 2;
    int y = 5;

    int sum = x + y;

    return sum;
}

int functionABC() {
    return 12;
}

int main() {
    functionA();

    int one = 5;
    int two = 7;

    example * newExample = new example();
    newExample->sumVars(one, two);
    newExample->subtract();
}