#include <vector>

using namespace std;

class Solution73 {
public:
    static void setZeroes(vector<vector<int>> &matrix) {
        bool flag_col0 = false;
        bool flag_row0 = false;
        for (vector<int> &item: matrix) {
            if (!item[0]) {
                flag_col0 = true;
            }
        }
        for (int item: matrix[0]) {
            if (!item) {
                flag_row0 = true;
            }
        }
        for (int i = 1; i < matrix.size(); i++) {
            for (int j = 1; j < matrix[i].size(); j++) {
                if (!matrix[i][j]) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for (int i = 1; i < matrix.size(); i++) {
            for (int j = 1; j < matrix[i].size(); j++) {
                if (!matrix[i][0] || !matrix[0][j]) {
                    matrix[i][j] = 0;
                }
            }
        }
        if (flag_col0) {
            for (vector<int> &item: matrix) {
                item[0] = 0;
            }
        }
        if (flag_row0) {
            for (int &item: matrix[0]) {
                item = 0;
            }
        }
    }
};