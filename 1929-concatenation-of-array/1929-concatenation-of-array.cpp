class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int length = nums.size();
        vector<int> result(nums.size()*2);

        copy(nums.begin(),nums.end(),result.begin());
        copy(nums.begin(),nums.end(),nums.size()+result.begin());

        return result;

    }
};