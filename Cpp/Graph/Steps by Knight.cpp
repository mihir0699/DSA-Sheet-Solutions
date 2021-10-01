int vis[1000][1000];
int size;
int dis[1000][1000];
bool isValid(int x, int y)
{
    if(x<0 || x>=size || y <0 || y>=size || vis[x][y])
    return false;
  //  cout<<x<<" "<<y<<endl;
    return true;
}
int minStepToReachTarget(int knightPos[], int targetPos[], int N) {
    // code here
    size=N;
    queue<pair<int, int>> q;
    memset(vis, 0, sizeof(vis));
    memset(dis, 0, sizeof(dis));
    q.push({knightPos[0]-1, knightPos[1]-1});
     vis[knightPos[0]-1][knightPos[1]-1]=1;
    if((knightPos[0] == targetPos[0]) && (knightPos[1] == targetPos[1]))
    return 0;
    while(!q.empty())
    {
        pair<int, int>temp = q.front();
        q.pop();
        if(temp.first==(targetPos[0]-1) && temp.second==(targetPos[1]-1))
        return dis[temp.first][temp.second];
        int dx[]={1,2,1,2,-1,-2,-1,-2};
        int dy[]={2,1,-2,-1,2,1,-2,-1};
        for(int i=0;i<8;i++)
        {
            if(isValid(temp.first+dx[i], temp.second+dy[i]))
            {
                q.push({temp.first+dx[i], temp.second+dy[i]});
                vis[temp.first+dx[i]][temp.second+dy[i]]=1;
                dis[temp.first+dx[i]][temp.second+dy[i]] = dis[temp.first][temp.second]+1;
            }
        }
        
    }
  
}