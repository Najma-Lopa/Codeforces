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
    string st = "hello";
    string s;
    cin >> s;
    int cnt = 0;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == st[j])
        {
            cnt++;
            j++;
        }
    }
    if (cnt >= 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}