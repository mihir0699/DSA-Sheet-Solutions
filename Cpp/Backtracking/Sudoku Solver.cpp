
void solve(vector<vector<char>>& board, int i, vector<vector<bool>>& col, vector<vector<bool>>& row, vector<vector<bool>>& block, int num,int &flag)
    {
        if(num==10) 
        {
            flag=1;  // Solved 
            return;
                
        }
        if(i==9)
        {
            solve(board,0,col,row,block,num+1,flag);
            return;
        }
        if(row[i][num]) {solve(board,i+1,col,row,block,num,flag); return;}
        for(int j=0;j<9;j++)
        {
            if(board[i][j]=='.' && !col[j][num] && !block[3*(i/3)+(j/3)][num] && !row[i][num])
            {
                col[j][num]=1,block[3*(i/3)+(j/3)][num]=1,row[i][num]=1;
                board[i][j]=num+'0';
                solve(board,i+1,col,row,block,num,flag);
                if(flag==1) return;
                col[j][num]=0,block[3*(i/3)+(j/3)][num]=0,row[i][num]=0;
                board[i][j] = '.';
            }
        }
    }


void solveSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> col(10,vector<bool>(10,false));
        vector<vector<bool>> row(10,vector<bool>(10,false));
        vector<vector<bool>> block(10,vector<bool>(10,false));
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.') continue;
                
                row[i][board[i][j]-'0']=1;
                col[j][board[i][j]-'0']=1;
                block[3*(i/3)+(j/3)][board[i][j]-'0']=1;
            }
        }
        int flag=0;
        solve(board,0,col,row,block,1,flag);
    }