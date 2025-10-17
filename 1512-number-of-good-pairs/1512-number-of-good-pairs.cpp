class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> frequence;
        for (int i : nums){
            if (frequence.count(i)){
                frequence[i] ++;
            }
            else{
                frequence[i]= 1;
            }
        }

        int result = 0;
        for (auto& pair : frequence){
            cout << pair.first << pair.second << endl;
            int num = pair.second;
            result +=( (num-1)*(num))/2;
        }

        return result;
        
    }
};