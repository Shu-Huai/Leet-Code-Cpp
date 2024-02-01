#include <string>

using namespace std;

class Solution1041 {
public:
    static bool isRobotBounded(string instructions) {
        int dir = 2;
        int pos[2] = {0};
        for (int i = 0; i < instructions.length(); i++) {
            if (instructions[i] == 'G') {
                pos[dir / 2] = pos[dir / 2] + (dir % 2 ? -1 : 1);
            } else if (instructions[i] == 'L') {
                switch (dir) {
                    case 0:
                    case 1:
                        dir += 2;
                        break;
                    case 2:
                        dir -= 1;
                        break;
                    case 3:
                        dir -= 3;
                        break;
                    default:
                        break;
                }
            } else if (instructions[i] == 'R') {
                switch (dir) {
                    case 2:
                    case 3:
                        dir -= 2;
                        break;
                    case 0:
                        dir += 3;
                        break;
                    case 1:
                        dir += 1;
                        break;
                    default:
                        break;

                }
            }
        }
        return dir != 2 || pos[0] == 0 && pos[1] == 0;
    }
};