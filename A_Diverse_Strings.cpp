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
    // string s1="abcdefghijklmnopqrstuvwxyz";
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int cnt = 0;
        // int d=s[0]-'0';
        // int p=s[1]-'0';
        // cout<<d<<" "<<p<<endl;
        if (s.size() == 1)
            cout << "Yes" << endl;
        else
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i + 1] - s[i] == 1)
                    cnt++;
                else
                {
                    cnt = 0;
                    break;
                }
            }
            // cout<<s.size()<<endl;
            if (cnt > 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}