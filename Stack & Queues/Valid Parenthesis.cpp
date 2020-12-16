class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            char x = s[i];
            if(s[i]=='[' || s[i]=='{' || s[i]=='(')
                st.push(x);
            else
            {
                if(st.empty())
                    return false;
                char pop = st.top();
                if(s[i]==']')
                {
                    if(pop=='[')
                        st.pop();
                    else
                        return false;
                }
                else if(s[i]=='}')
                {
                    if(pop=='{')
                        st.pop();
                    else
                        return false;
                }
                 else if(s[i]==')')
                {
                    if(pop=='(')
                        st.pop();
                    else
                        return false;
                }
            }
        }
        if(st.empty())
        return true;
        return false;
    }
};