#include <bits/stdc++.h>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, min = -1, max = -1;
        cin >> a >> b;
        int arr[a];
        for (int i = 0; i < a; i++)
            cin >> arr[i];
        int low = 0, high = a - 1;
        while (low <= high)
        {
            int mid = (low + (high - low) / 2);
            if (arr[mid] == b && mid > 0 && arr[mid - 1] < arr[mid])
            {
                min = mid;
                break;
            }
            else if (arr[mid] == b && mid > 0 && arr[mid - 1] == arr[mid])
            {
                high = mid - 1;
            }
            else if (arr[mid] == b && mid == 0)
            {
                min = mid;
                break;
            }
            else if (arr[mid] < b)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            // cout<<arr[mid]<<endl;
        }
        low = 0, high = a - 1;
        while (low <= high)
        {
            int mid = (low + (high - low) / 2);
            if (arr[mid] == b && mid < a - 1 && arr[mid + 1] > arr[mid])
            {
                max = mid;
                break;
            }
            else if (arr[mid] == b && mid < a - 1 && arr[mid + 1] == arr[mid])
            {
                low = mid + 1;
            }
            else if (arr[mid] == b && mid == a - 1)
            {
                max = mid;
                break;
            }
            else if (arr[mid] < b)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
            // cout<<arr[mid]<<endl;
        }
        if (min == -1)
            cout << "-1" << endl;
        else
            cout << min << " " << max << endl;
    }
}