class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> smaller;
        vector<int> greater;
        vector<int> equals;

        for (int number: nums){
            if (number > pivot){
                greater.push_back(number);
            }
            else if (number < pivot){
                smaller.push_back(number);
            }
            else if (number == pivot){
                equals.push_back(number);
            }


        }
        smaller.insert(smaller.end(), equals.begin(), equals.end());
        smaller.insert(smaller.end(), greater.begin(), greater.end());
        return smaller;
    }
};