int d, val;

float recursion(int i) {
    float res;
    if (i == 1) return (float)val - 1;
    res = recursion(i - 1);
    return res + -1 * res * (float)((val - 1) * i) / (float)(i + 1);
}

float recSecondWay(int x, int depth) {
    d = depth;
    val = x;
    return recursion(d);
}