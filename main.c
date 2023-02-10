#include <stdio.h>
#include "Rec1.h"
#include "Rec2.h"
#include "Rec3.h"
#include "Cycle.h"

float check(float foo, float res) {
    printf(res == foo ? "Correct!   " : "Invalid!  ");
    return foo;
}

int main() {
    int depth;
    float trueRes, x;

    printf("Input depth:");
    scanf("%i", &depth);
    printf("Input x:");
    scanf("%f", &x);

    trueRes = cycle(x, depth);
    printf("\"Cyclic\" checking function output: %f\n", trueRes);
    printf("\"There\" recursive function output: %f\n", check(recFirstWay(x, depth), trueRes));
    printf("\"From there\" recursive function output: %f\n", check(recSecondWay(x, depth), trueRes));
    printf("\"Combined\" recursive function output: %f\n", check(recThirdWay(x, depth), trueRes));

    return 0;
}
