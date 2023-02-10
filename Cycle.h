float cycle(float x, int depth) {
    float res = (float)x - 1, s = res;
    for (int i = 2; i <= depth; i++) {
        res = -1 * res * (x - 1) * (float)i / (float)(i + 1);
        s += res;
    }
    return s;
}