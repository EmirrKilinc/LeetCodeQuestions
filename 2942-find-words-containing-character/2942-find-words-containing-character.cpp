class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        int index = 0;
        for(string word:words){
            for(char a:word){
                if (a==x){
                    result.push_back(index);
                    break;
                }
            }
            index += 1;
        }
        return result;
    }
};