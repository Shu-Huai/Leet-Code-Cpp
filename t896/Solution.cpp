#include <vector>

using namespace std;

class Solution896 {
public:
    static bool isMonotonic(vector<int> &nums) {
        bool upper = true;
        bool lower = true;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1] && upper) {
                upper = false;
            }
            if (nums[i] > nums[i - 1] && lower) {
                lower = false;
            }
        }
        return upper || lower;
    }
};