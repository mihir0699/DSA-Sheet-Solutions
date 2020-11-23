class Solution
{
public:
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];
        if ((sum % 2) != 0)
            return false;
        sum = sum / 2;
        bool arr[nums.size() + 1][sum + 1];
        for (int i = 0; i <= sum; i++)
            arr[0][i] = false;
        for (int i = 0; i <= nums.size(); i++)
            arr[i][0] = true;
        for (int i = 1; i <= nums.size(); i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (nums[i - 1] <= j)
                {
                    arr[i][j] = arr[i - 1][j] || arr[i - 1][j - nums[i - 1]];
                }
                else
                    arr[i][j] = arr[i - 1][j];
            }
        }
        // for(int i=0;i<=nums.size();i++)
        // {
        //     for(int j=0;j<=sum;j++)
        //         cout<<arr[i][j]<<" ";
        //     cout<<endl;
        // }
        return arr[nums.size()][sum];
    }
};