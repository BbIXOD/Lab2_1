#include <stdio.h>
#include "Rec_One.h"
#include "Rec_Two.h"


int main() {
    int depth, x;
    printf("Input depth:");
    scanf("%i", &depth);
    printf("Input x:");
    scanf("%i", &x);

    printf("\"There\" recursive function output: %f\n", recFirstWay(x, depth));
    printf("\"From there\" recursive function output: %f\n", recSecondWay(x, depth));

    return 0;
}
