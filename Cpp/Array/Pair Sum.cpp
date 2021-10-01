class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {
        // code here
        int count = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= k)
            {
                count = count + m[k - arr[i]];
                m[arr[i]] += 1;
            }
        }
        return count;
    }
};