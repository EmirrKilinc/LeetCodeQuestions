class Solution {
public:
    int scoreOfString(string s) {
        int length = s.length();

        int i = 0;
        int j = 1;
        int count = 0;
        while (j < length){
            count += abs(int(s[i]) - int(s[j]));
            i++;
            j++;
        }
        return count;
    }
};