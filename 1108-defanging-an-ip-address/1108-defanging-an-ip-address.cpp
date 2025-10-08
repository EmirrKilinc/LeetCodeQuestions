class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for(char a: address){
            if(a == '.'){
                result += "[.]";

            }
            else{
                result += a;
            }
        }
        return result;
    }
};