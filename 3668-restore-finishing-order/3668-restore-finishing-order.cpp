class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> result;
        for(int i : order){
            for(int j : friends){
                if (i == j){
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};