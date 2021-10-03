class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> &a = heights;
        int ans = INT_MIN;
        stack<int> s;
        for(int i = 0;i<=n;i++){
            while(!s.empty() and (i==n or a[s.top()]>=a[i])){
                int height = a[s.top()];
                s.pop();
                int width;
                if(s.empty()) width = i;
                else width = i-s.top()-1;
                ans = max(ans,height*width);
            }
            s.push(i);
        }
        return ans;
        
    }
};