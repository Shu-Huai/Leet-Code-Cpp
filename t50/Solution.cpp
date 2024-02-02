#include <cmath>

class Solution50 {
public:
    static double myPowApi(double x, int n) {
        return pow(x, n);
    }

    static double quickMul(double x, int n) { //NOLINT
        if (n == 0) {
            return 1;
        }
        double result = quickMul(x, n / 2);
        return n % 2 ? result * result * x : result * result;
    }

    static double myPowSquare(double x, int n) {
        return n >= 0 ? quickMul(x, n) : 1 / quickMul(x, -n);
    }

    static double myPowLoop(double x, int n) {
        if (n == 0) {
            return 1;
        } else if (n > 0) {
            double result = 1;
            double temp = x;
            while (n > 0) {
                if (n % 2 == 1) {
                    result *= temp;
                }
                temp *= temp;
                n /= 2;
            }
            return result;
        } else {
            double result = 1;
            double temp = x;
            while (n < 0) {
                if (n % 2 == -1) {
                    result *= temp;
                }
                temp *= temp;
                n /= 2;
            }
            return 1 / result;
        }
    }
};