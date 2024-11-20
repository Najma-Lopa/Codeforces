#include <bits/stdc++.h>
using namespace std;

long long val(vector<int> v, int m)
{
    long long mul = 1;
    for (int i = 0; i < v.size(); i++)
    {
        mul *= v[i];
    }

    long long a = mul % m;

    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }

        string st;
        cin >> st;
        vector<long long> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back(val(v, m));
            if (st[i] == 'L')
            {
                v.erase(v.begin());
            }
            else if (st[i] == 'R')
            {
                v.erase(v.end() - 1);
            }
        }

        for (auto u : ans)
        {
            cout << u << " ";
        }
        cout << endl;
    }
}