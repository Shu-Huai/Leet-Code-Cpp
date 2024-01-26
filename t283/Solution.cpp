#include <vector>

using namespace std;

class Solution283 {
public:
    static void moveZeroes(vector<int> &nums) {
        int right = 0;
        int read = 0;
        int length = (int) nums.size();
        while (read < length) {
            if (nums[read] != 0) {
                nums[right] = nums[read];
                right++;
            }
            read++;
        }
        for (int i = right; i < length; i++) {
            nums[i] = 0;
        }
    }
};