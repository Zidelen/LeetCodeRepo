class Solution{
public:
    bool isValid(string s){
        string stack;
        for(char &c : s){
            switch(c){
                case '(':
                case '{':
                case '[':{
                    stack.push_back(c);
                    break;
                }
                case ')':{
                    if(stack.empty() || stack.back() != '('){
                        return false;
                    }
                    stack.pop_back();
                    break;
                }
                case '}':{
                    if(stack.empty() || stack.back() != '{'){
                        return false;
                    }
                    stack.pop_back();
                    break;
                }
                case ']':{
                    if(stack.empty() || stack.back() != '['){
                        return false;
                    }
                    stack.pop_back();
                    break;
                }
            }
        }
        return stack.empty();
    }
};