//* بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define fl float

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string st = s;
        int p = s.size();
        sort(st.begin(), st.end());
        int size = unique(st.begin(), st.end()) - st.begin();
        // cout<<size<<endl;
        if (size == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout<<s[p-1];
            for (int i = 0; i < p - 1; i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
    }
}