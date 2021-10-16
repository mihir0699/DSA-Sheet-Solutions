/** https://leetcode.com/problems/spiral-matrix/  **/

/** Given an m x n matrix, return all elements of the matrix in spiral order. **/

/** Example: 
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5] 
**/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=m-1;
        
        vector<int> ans;
        while(top<=bottom && left<=right){
           
           for(int j=left;j<=right;j++)
               ans.push_back(matrix[top][j]);
            top++;
            
            for(int i =top;i<=bottom;i++)
                ans.push_back(matrix[i][right]);
            right--;
            
            if(top<=bottom){
            for(int i=right;i>=left;i--)
                ans.push_back(matrix[bottom][i]);
            bottom--;
            }
            
            if(left<=right){
        
            for(int j=bottom;j>=top;j--)
                ans.push_back(matrix[j][left]);
            left++;
            }    
            
        }
        return ans;
    }
        
};
