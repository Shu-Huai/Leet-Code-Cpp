#include <vector>

using namespace std;

class Solution1822 {
public:
    static int arraySign(vector<int> &nums) {
        int result = 1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                return 0;
            } else if (nums[i] < 0) {
                result *= -1;
            }
        }
        return result;
    }
};