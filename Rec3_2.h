int d = 0;

float recurs(float x, int depth, float res) {
    d++;
    if (d == 1) res = --x;
    else res = -1 * res * x * (float)d / (float)(d + 1);
    if (d == depth) return res;
    res += recurs(x, depth, res);
    return res;
}

float recThirdWay2(float x, int depth) {
    return recurs(x, depth, 0);
}
