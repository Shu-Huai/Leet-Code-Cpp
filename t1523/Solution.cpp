class Solution1523 {
public:
    static int countOdds(int low, int high) {
        return (high + high % 2 - low - low % 2) / 2 + low % 2;
    }
};