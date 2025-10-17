class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> zeros;
        vector<int> ones;

        for (int i : nums){
            if (i % 2 == 0){
                zeros.push_back(0);
            }
            else{
                ones.push_back(1);
            }

        }
         zeros.insert(zeros.end(),ones.begin(), ones.end());
        return zeros;
    }
       
};