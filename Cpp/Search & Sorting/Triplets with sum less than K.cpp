class Solution
{

public:
    long long countTriplets(long long arr[], int n, long long sum)
    {
        // Your code goes here
        sort(arr, arr + n);
        long long ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            long long elem = arr[i], low = i + 1, high = n - 1;
            while (low < high)
            {
                if ((arr[low] + arr[high] + elem) < sum)
                {
                    ans = ans + (high - low);
                    low++;
                }
                else if ((arr[low] + arr[high] + elem) >= sum)
                {
                    high--;
                }
            }
        }
        return ans;
    }
};