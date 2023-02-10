int i = 0;
float result, sum;

float recFirstWay(float x, int depth) {
    if (i == depth) return sum;
    i++;
    if (i == 1)result = --x;
    else result = -1 * result * x * (float)i / (float)(i + 1);
    sum += result;
    return recFirstWay(x, depth);
}