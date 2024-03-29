#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int> &a,
          const pair<int, int> &b)
{
    if (a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[61];
        memset(b, 0, sizeof b);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        //author anas khan
        vector<pair<int, int>> v;
        for (int i = 0; i < 61; i++)
        {
            if (b[i] != 0)
            {
                v.push_back(make_pair(i, b[i]));
            }
        }
        //sort(v.begin(),v.end());
        sort(v.begin(), v.end(), comp);
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[i].second; j++)
                cout << v[i].first << " ";
        }
        cout << endl;
    }
    return 0;
}