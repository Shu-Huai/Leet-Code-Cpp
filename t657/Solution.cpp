#include <string>

using namespace std;

class Solution657 {
public:
    static bool judgeCircle(string moves) {
        if (moves.empty()) {
            return true;
        }
        if ((moves.length() & 1) == 1) {
            return false;
        }
        int x = 0;
        int y = 0;
        for (int i = 0; i < moves.length(); i++) {
            if (moves[i] == 'R') {
                x++;
            } else if (moves[i] == 'L') {
                x--;
            } else if (moves[i] == 'U') {
                y++;
            } else if (moves[i] == 'D') {
                y--;
            }
        }
        return x == 0 && y == 0;
    }
};