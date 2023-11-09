#include <bits/stdc++.h>
using namespace std;

int max_sum_subarr(int a[],int n){
    
    int c=0,max = 0;
    for(int i=0;i<n;i++){
        c += a[i];
        if(c > max)
         max = c;
        if(c<0)
         c=0;
    }
    return max;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) 
	  cin>>a[i];
  int x = max_sum_subarr(a,n);
	cout<<x;
	return 0;
}
