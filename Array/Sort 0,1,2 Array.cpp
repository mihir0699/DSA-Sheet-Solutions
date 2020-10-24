#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int *arr = new int[a];
        int low = 0, high = a - 1, mid = 0;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }

        for (int i = 0; i < a; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}