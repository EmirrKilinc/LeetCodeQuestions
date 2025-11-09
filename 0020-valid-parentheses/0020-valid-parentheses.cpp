class Solution {
public:
    bool isValid(string s) {
        char stack[10000];
        int top = -1;

        for (char letter : s) {
            if (letter == '(' || letter == '{' || letter == '[') {
                stack[++top] = letter;
            } 
            else {
                if (top == -1) return false; 

                char open = stack[top--];
                if ((open == '(' && letter != ')') ||
                    (open == '[' && letter != ']') ||
                    (open == '{' && letter != '}')) {
                    return false;
                }
            }
        }

        return top == -1;
    }
};
