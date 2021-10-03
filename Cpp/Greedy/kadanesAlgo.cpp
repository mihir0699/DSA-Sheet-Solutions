/// question :- https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
 
    int maxSubarraySum(int a[], int n){
        
        // Your code here
        int i,cs=0,ms=0;
        for(i=0;i<n;i++)
        {
            cs=cs+a[i];
            if(cs<0)
            {
                cs=0;
            }
             
       
             ms=max(cs,ms);
        }
       return ms; 
    }
};



int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) 
    {
        
        cin>>n;
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
