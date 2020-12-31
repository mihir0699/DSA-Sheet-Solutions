lass Solution{
    public :
        string secFrequent(string arr[], int n){
            //code here.
            map<string, int> m;
string s1, s2;
int max1 = -1, max2 = -1;
for (int i = 0; i < n; i++)
{
    m[arr[i]]++;
}
for (auto i : m)
{
    if (m[i.first] > max1)
        max1 = m[i.first];
}

for (auto i : m)
{
    if (m[i.first] > max2 && (m[i.first] < max1))
        max2 = m[i.first], s2 = i.first;
}
return s2;
}
}
;