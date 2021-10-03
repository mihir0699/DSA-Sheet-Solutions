class Solution {
public:
    
    int maxProduct(vector<int>& a) {
        int minVal=a[0];
	   int maxVal=a[0];
	   int maxpro=a[0];
	   for(int i=1;i<a.size();i++){
	       if(a[i]<0){
	           swap(minVal,maxVal);
	       }
	       minVal=min(a[i],minVal*a[i]);
	       maxVal=max(a[i],maxVal*a[i]);
	       maxpro=max(maxpro,maxVal);
	   }
	   
	   return maxpro;
    }
};
