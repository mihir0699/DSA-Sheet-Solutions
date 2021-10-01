bool comparator(pair<pair<int, int>, double> x, pair<pair<int, int>, double> y)
{
    return x.second > y.second;
}
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    vector<pair<pair<int, int>, double>> v;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        v.push_back({{arr[i].value, arr[i].weight}, (double)arr[i].value / (double)arr[i].weight});
    }
    sort(v.begin(), v.end(), comparator);
    int t = 0, i = 0;
    while (t < W && i <= n - 1)
    {
        if (v[i].first.second <= (W - t))
        {
            sum = sum + (v[i].first.first);
            t = t + v[i].first.second;
        }
        else
        {
            sum = sum + (W - t) * (v[i].second);
            t = W;
        }
        i++;
    }
    return sum;
}