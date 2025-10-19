class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        for (int x : nums) maxOr |= x;  
        
        int count = 0;
        
        function<void(int,int)> dfs = [&](int i, int currentOr) {
            if (i == nums.size()) {
                if (currentOr == maxOr) count++;
                return;
            }
            

            dfs(i + 1, currentOr | nums[i]);

            dfs(i + 1, currentOr);
        };
        
        dfs(0, 0);
        return count;
    }
};
