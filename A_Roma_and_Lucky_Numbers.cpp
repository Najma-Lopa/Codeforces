// بِسْمِ ٱللَّهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();
    ll n, k; 
    cin >> n >> k;
    int cnt = 0;
    while (n--)
    {
        ll t = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '7' || s[i] == '4')
                t++;
        }
        if (t <= k)
            cnt++;
    }

    cout << cnt << endl;
}