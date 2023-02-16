#include <malloc.h>

float* recursion2(float x, int index) {
    float *resArr = malloc(2 * sizeof* resArr);
    if (index == 1) {
        resArr[0] = x;
        resArr[1] = x;
        return resArr;
    }
    float *arr = recursion2(x, index - 1);
    resArr[0] = -1 * arr[0] * x * (float)index / (float)(index + 1);
    resArr[1] = arr[1] + resArr[0];
    free(arr);
    return resArr;
}

float recSecondWay(float x, int depth) {
    float *arr = recursion2(--x, depth);
    float result = arr[1];
    free(arr);
    return result;
}