class Solution {
public:
    int countOperations(int a, int b) {
        return !a || !b ? 0 : a / b + countOperations(b, a % b);
    }
};