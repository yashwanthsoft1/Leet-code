class Solution {
public:
    int mySqrt(int x) {
        if (x < 0) return -1; // Error handling
    double sqrt = x / 2.0;
    double temp = 0;
    while (sqrt != temp) {
        temp = sqrt;
        sqrt = (x / temp + temp) / 2.0;
    }
    return sqrt;
    }
};