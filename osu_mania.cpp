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
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '#')
                {
                    v.push_back(i+1);
                }
            }
        }
        reverse(v.begin(),v.end());
        for(auto u:v)
        {
            cout<<u<<" ";
        }
        cout<<endl;
    }
}