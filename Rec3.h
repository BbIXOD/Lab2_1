int i3 = 0;
float result3;
//third function somehow can sometimes show not fully correct answer I think this caused by rounding in different way.
float recThirdWay(float x, int depth) {
    float res;
    i3++;
    if (i3 == 1) res = --x;
    else res = -1 * result3 * x * (float)i3 / (float)(i3 + 1);
    result3 = res;
    if (i3 == depth) return res;
    return res + recThirdWay(x, depth);
}