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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a,b, minSum=0, maxSum=0;
        cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++)
        cin>>arr[i];
        sort(arr, arr+a);
        int index = ceil((float)a/(float)(b+1));
        for(int i=0;i<index;i++)
        minSum = minSum + arr[i];
        for(int i=a-1;i>=a-index;i--)
        maxSum = maxSum + arr[i];
        cout<<minSum<<" "<<maxSum<<endl;
    }
}