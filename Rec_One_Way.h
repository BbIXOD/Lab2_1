int i = 0;
float result = 0;

float recOneWay(int x, int depth) {
    if (i == depth) return result;
    i++;
    if (i == 1) {
        result += (float)x - 1;
        return recOneWay(x, depth);
    }
    result += -1 * result * (float)((x - 1) * i) / (float)(i + 1);
    return recOneWay(x, depth);
}