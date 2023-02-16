#include <stdio.h>
#include <math.h>
#include "Rec1.h"
#include "Rec2.h"
#include "Rec3.h"
#include "Cycle.h"

float check(float foo, float res) {
    float delta = res - foo;
    if (delta < 0) delta *= -1;
    if (res < 0) res *= -1;
    const float percent = delta / res * 100;
    if (res == 0) printf("delta = %.1f  ", delta);
    else {
        printf(percent <= 20 ? "Correct! " : "Invalid! "); //in school physics 20% it's OK
        printf("delta = %.1f%%  ", percent);
    }
    return foo;
}

int main() {
    int depth;
    float trueRes, x;

    printf("Input depth:");
    scanf("%i", &depth);
    printf("Input x:");
    scanf("%f", &x);

    trueRes = logf(x);
    printf("Real result is: %f\n", trueRes);
    printf("\"Cyclic\" checking function output: %f\n", check(cycle(x, depth), trueRes));
    printf("\"There\" recursive function output: %f\n", check(recFirstWay(x, depth), trueRes));
    printf("\"From there\" recursive function output: %f\n", check(recSecondWay(x, depth), trueRes));
    printf("\"Combined\" recursive function output: %f\n", check(recThirdWay(x, depth), trueRes));

    return 0;
}
