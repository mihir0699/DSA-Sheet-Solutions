class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
           stack<int> s;
    vector<int> v;
         if(nums1.size()==0)
            return v;
    s.push(nums2[0]);
    unordered_map<int, int> m;
    for(int i=1;i<nums2.size();i++)
    {
        if(s.empty())
        {
            s.push(nums2[i]);
            continue;
        }
        while(!s.empty() && s.top()<nums2[i])
        {
            m[s.top()] =  nums2[i];
            s.pop();
        }
        s.push(nums2[i]);
    }
     while (!s.empty())
     {
         m[s.top()] = -1;
         s.pop();
     }
    for(int i=0;i<nums1.size();i++)
    {
        v.push_back(m[nums1[i]]);
    }
 
      return v;
        
    }
};