int d = 0;
//this has the same problem but looks better
float recThirdWay2(float x, int depth, float res) {
    d++;
    if (d == 1) res = --x;
    else res = -1 * res * x * (float)d / (float)(d + 1);
    if (d == depth) return res;
    res += recThirdWay2(x, depth, res);
    return res;
}