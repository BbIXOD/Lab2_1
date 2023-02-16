float cycle(float x, int depth) {
    float res = (float)--x, s = res;
    for (int i = 2; i <= depth; i++) {
        res = -1 * res * x * (float)i / (float)(i + 1);
        s += res;
    }
    return s;
}