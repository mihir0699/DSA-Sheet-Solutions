class Solution
{
public:
    static bool comparator(vector<int> x, vector<int> y)
    {
        if (x[0] == y[0])
            return x[1] < y[1];
        return x[0] < y[0];
    }
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> v;
        if (!intervals.size())
            return v;
        sort(intervals.begin(), intervals.end(), this->comparator);
        int index = 0, end = 0;
        for (int i = 1; i < intervals.size(); i++)
        {
            if (intervals[i][0] <= intervals[end][1] && intervals[i][1] <= intervals[end][1])
            {
                continue;
            }
            else if (intervals[i][0] <= intervals[end][1])
            {
                end = i;
            }
            else
            {
                vector<int> x{intervals[index][0], intervals[end][1]};
                v.push_back(x);
                index = i;
                end = i;
            }
        }
        vector<int> x{intervals[index][0], intervals[end][1]};
        v.push_back(x);
        return v;
    }
};