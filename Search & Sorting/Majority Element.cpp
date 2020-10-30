#include <iostream>
using namespace std;
#define loop(n) for (int i = 0; i < n; i++)

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        loop(n)
                cin >>
            arr[i];

        int maj_idx = 0, cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[maj_idx] == arr[i])
                cnt++;
            else
                cnt--;

            if (cnt == 0)
            {
                maj_idx = i;
                cnt = 1;
            }
        }

        cnt = 0;
        loop(n) if (arr[maj_idx] == arr[i])
            cnt++;

        if (cnt > n / 2)
            cout << arr[maj_idx] << endl;
        else
            cout << -1 << endl;
    }
}