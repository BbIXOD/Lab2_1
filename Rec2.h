float val;
float result2;

float recursion(int index) {
    float res;
    if (index == 1) {
        result2 = (float)val;
        return result2;
    }
    res = -1 * recursion(index - 1) * val * (float)index / (float)(index + 1);
    result2 += res;
    return res;
}

float recSecondWay(float x, int depth) {
    val = --x;
    recursion(depth);
    return result2;
}