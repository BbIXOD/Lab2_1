float recursion1(float x, float result, float sum, int depth, int i) {
    if (i != 1) result = -1 * result * x * (float)i / (float)(i + 1);
    sum += result;
    if (i == depth) return sum;
    return recursion1(x, result, sum, depth, ++i);
};

float recFirstWay(float x, int depth) {
    x--;
    return recursion1(x, x, 0, depth, 1);
}