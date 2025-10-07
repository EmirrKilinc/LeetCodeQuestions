class Solution {
public:
    int maxFreqSum(string s) {
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        map<char, int> vowel_freq;
        map<char, int> consonant_freq;

        for(char a: s){
            if(find(vowels.begin(), vowels.end(),a) != vowels.end()){
                if(vowel_freq.find(a) == vowel_freq.end()){
                    vowel_freq[a] = 1;
                }
                else{
                    vowel_freq[a] += 1;
                }

            }

            else{
                if (consonant_freq.find(a) == consonant_freq.end()){
                    consonant_freq[a] = 1;
                }
                else{
                    consonant_freq[a] += 1;
                }
            }

        }
        
        int vowel_max = 0;
        for (const auto& pair : vowel_freq){
            if(pair.second > vowel_max){
                vowel_max = pair.second;
            }
        }

        int consonant_max = 0;
        for (const auto& pair : consonant_freq){
            if(pair.second > consonant_max){
                consonant_max= pair.second;
            }
        }

        return vowel_max + consonant_max;


    }
};