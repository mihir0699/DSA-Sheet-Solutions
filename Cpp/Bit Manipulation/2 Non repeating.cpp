class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        int ans = 0, c = 0;
        set<int> s;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++)
            ans = ans ^ nums[i];
        while (ans > 0)
        {
            if (ans & 1)
            {
                int mask = 1 << c;
                int ans1 = 0, ans2 = 0;
                // cout<<mask<<endl;
                for (int i = 0; i < nums.size(); i++)
                {
                    if (nums[i] & mask)
                    {
                        ans1 = ans1 ^ nums[i];
                    }
                    else
                    {
                        ans2 = ans2 ^ nums[i];
                    }
                }
                v.push_back(ans1);
                v.push_back(ans2);
                break;
            }
            c++;
            ans = ans >> 1;
        }
        sort(v.begin(), v.end());
        return v;
    }
};