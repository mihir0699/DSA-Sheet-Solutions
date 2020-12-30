class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int arr[n][n];
        for (int j = 0; j < n; j++)
        {
            int k = 0;
            for (int i = n - 1; i >= 0; i--)
                arr[j][k] = matrix[i][j], k++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                matrix[i][j] = arr[i][j];
        }
    }
};