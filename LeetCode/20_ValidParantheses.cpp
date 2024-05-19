#include<iostream>
#include<vector>

using namespace std;
bool isValid(string s) {
        vector<char> stack;
        char last = '0';
        for (int i = 0; i < s.size(); i++)
        {
            char x = s[i];
            if(x == '(' || x == '{' || x == '[')
            {
                stack.push_back(x);
                last = x;
            }
            else if (!stack.empty())
            {            
                if (x == ')' && last == '(')
                {
                    stack.pop_back();
                    last = stack.back();
                }
                else if (x == '}' && last == '{')
                {
                    stack.pop_back();
                    last = stack.back();
                }
                else if (x == ']' && last == '[')
                {
                    stack.pop_back();
                    last = stack.back();
                }
            }
            else
            {
                return false;
            }
        }
        if(stack.empty())
        {
            return true;
        }
        else
        {
        return false;
        }
    }

    int main()
    {
        string s = "()[]{}";
        s = "(]";
        s = "()";
        bool ans = isValid(s);
        cout << ans;
    }