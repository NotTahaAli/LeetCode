class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        for(string token: tokens) {
            if (token == "+" || token == "/" || token == "*" || token == "-") {
                int op2 = nums.top(); nums.pop();
                int op1 = nums.top(); nums.pop();
                switch (token[0]) {
                    case '+':
                    op1+=op2;
                    break;

                    case '-':
                    op1-=op2;
                    break;

                    case '*':
                    op1*=op2;
                    break;

                    default:
                    op1/=op2;
                    break;
                }
                nums.push(op1);
            } else {
                nums.push(stoi(token));
            }
        }
        return nums.top();
    }
};