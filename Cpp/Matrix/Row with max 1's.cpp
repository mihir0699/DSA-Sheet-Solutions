class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int i=0, j=m-1, row=-1;
	    while(i<=n-1 && j>=0)
	    {
	        if(arr[i][j]==1)
	        {
	            row = i;
	            j--;
	        }
	        else
	        i++;
	    }
	    return row;
	}

};