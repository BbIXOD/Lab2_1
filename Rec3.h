int i2 = 0;
float result2 = 0;

float recThirdWay(int x, int depth) {
    float res;
    if (i2 == depth) return 0;
    i2++;
    if (i2 == 1) result2 = (float)x - 1;
    else result2 = -1 * result2 * (float)((x - 1) * i2) / (float)(i2 + 1);
    res = result2;
    return res + recThirdWay(x, depth);
}