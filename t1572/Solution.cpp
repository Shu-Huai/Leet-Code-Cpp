#include <vector>

using namespace std;

class Solution1572 {
public:
    static int diagonalSumDouble(vector<vector<int>> &mat) {
        int result = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                if (i == j) {
                    result += mat[i][j];
                } else if (i + j + 1 == mat.size()) {
                    result += mat[i][j];
                }
            }
        }
        return result;
    }

    static int diagonalSumSingle(vector<vector<int>> &mat) {
        int result = 0;
        for (int i = 0; i < mat.size(); ++i) {
            result += mat[i][i] + mat[i][mat.size() - 1 - i];
        }
        return result - mat[mat.size() / 2][mat.size() / 2] * (mat.size() & 1);
    }
};