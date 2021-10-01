bool dfs(int node, vector<int> g[], int v[], int parent)
{
    v[node] = 1;
    for (int child : g[node])
    {
        //cout<<node<<" "<<child<<endl;
        if (v[child] == 0)
        {
            if (dfs(child, g, v, node))
                return true;
        }
        else if (child != parent)
            return true;
    }
    return false;
}

bool isCyclic(vector<int> g[], int V)
{
    // Your code here
    int v[V];
    for (int i = 0; i < V; i++)
        v[i] = 0;
    for (int i = 0; i < V; i++)
    {
        if (v[i] == 0)
        {
            bool ans = dfs(i, g, v, -1);
            if (ans)
                return true;
        }
    }
    return false;
}