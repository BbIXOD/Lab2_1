#include <stdio.h>
#include "Rec1.h"
#include "Rec2.h"
#include "Rec3.h"


int main() {
    int depth, x;
    printf("Input depth:");
    scanf("%i", &depth);
    printf("Input x:");
    scanf("%i", &x);

    printf("\"There\" recursive function output: %f\n", recFirstWay(x, depth));
    printf("\"From there\" recursive function output: %f\n", recSecondWay(x, depth));
    printf("\"Combined\" recursive function output: %f\n", recThirdWay(x, depth));

    return 0;
}
