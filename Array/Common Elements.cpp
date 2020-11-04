class Solution
{
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        unordered_map<int, int> m1, m2, m3, m4;
        vector<int> v;
        for (int i = 0; i < n1; i++)
        {
            if (m1[A[i]] == 0)
                m1[A[i]] = 1;
        }
        for (int i = 0; i < n2; i++)
        {
            if (m2[B[i]] == 0)
                m2[B[i]] = 1;
        }

        for (int i = 0; i < n3; i++)
        {
            if (m3[C[i]] == 0)
                m3[C[i]] = 1;
            if (m1[C[i]] == m2[C[i]] && m2[C[i]] == m3[C[i]] && m3[C[i]] == 1 && m4[C[i]] == 1)
                m4[C[i]] = 1;
        }
        for (auto i : m4)
        {
            v.push_back(i.first);
        }
        sort(v.begin(), v.end());
        return v;
    }
};