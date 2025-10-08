class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(0, nums, current,result);
        int res = 0;
   
        for (vector<int> subset : result) {
            int cur = 0; 
            for (int number : subset) {
                cur ^= number;
            }
            res += cur;
        }

        return res;
    }
    
    void backtrack(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result){
        if (index == nums.size()){
            result.push_back(current);
            return;
        }

        backtrack(index+1, nums, current, result);


        current.push_back(nums[index]);
        backtrack(index+1, nums, current, result);
        current.pop_back();
    }  

    
};