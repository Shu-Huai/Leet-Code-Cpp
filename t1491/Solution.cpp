#include <vector>

using namespace std;

class Solution1491 {
public:
    static double average(vector<int> &salary) {
        int max = salary[0];
        int min = salary[0];
        int sum = 0;
        for (int i: salary) {
            if (i > max) {
                max = i;
            }
            if (i < min) {
                min = i;
            }
            sum += i;
        }
        sum -= max + min;
        return double(sum) / double(salary.size() - 2);
    }
};