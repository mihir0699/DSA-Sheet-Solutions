class Solution
{
public:
    int findPosition(int N)
    {
        int c = 0, bit = 0, index;
        if (N == 0)
            return -1;
        while (N > 0)
        {
            if (N & 1)
            {
                index = c + 1;
                bit++;
            }
            N = N >> 1;
            c++;
        }
        if (bit == 0 || bit > 1)
            return -1;
        else
            return index;
    }
};
