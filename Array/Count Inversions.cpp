#include <bits/stdc++.h>
#define MOD 1000000007
#define init(arr, val) memset(arr, val, sizeof(arr))
#define ull unsigned long long int
#define ll long long
#define PL pair<ll, ll>
#define PI pair<int, int>
#define vl vector<ll>
#define endl "\n"
#define vi vector<int>
#define um unordered_map
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define all(a) a.begin(), a.end()
#define sortall(a) sort(all(a))
using namespace std;

void merge(long long int arr[], long long int temp[], int low, int mid, int high, long long int &ans)
{
    long long int i = low, k = mid - 1, j = mid, index = low;
    while ((i <= mid - 1) && (j <= high))
    {
        if (arr[i] <= arr[j])
        {
            temp[index++] = arr[i++];
        }
        else
        {
            ans = ans + mid - i;
            temp[index++] = arr[j++];
        }
    }

    while (i <= mid - 1)
        temp[index++] = arr[i++];
    while (j <= high)
        temp[index++] = arr[j++];
    for (int i = low; i <= high; i++)
        arr[i] = temp[i];
}

void merge_sort(long long int arr[], long long int temp[], int low, int high, long long int &ans)
{
    if (low < high)
    {
        long long int mid = low + (high - low) / 2;
        merge_sort(arr, temp, low, mid, ans);
        merge_sort(arr, temp, mid + 1, high, ans);
        merge(arr, temp, low, mid + 1, high, ans);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        long long int arr[a], ans = 0, temp[a];
        for (int i = 0; i < a; i++)
            cin >> arr[i];
        merge_sort(arr, temp, 0, a - 1, ans);
        cout << ans << endl;
    }
}