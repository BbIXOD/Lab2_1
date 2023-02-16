float recursion3(float x, float res, int i, int depth) {
    if (i == 1) res = x;
    else res = -1 * res * x * (float)i / (float)(i + 1);
    if (i == depth) return res;
    res += recursion3(x, res, ++i, depth);
    return res;
}

float recThirdWay(float x, int depth) {
    return recursion3(--x, 0, 1, depth);
}
