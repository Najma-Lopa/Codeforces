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
    int t;
    cin >> t;
    string s1 = "vika";
    while (t--)
    {
        string s;
        int n, m;
        cin >> n >> m;
        int a=0;
        char nam[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>nam[i][j];
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(nam[j][i]==s1[a])
                {
                    s+=nam[j][i];
                    a++;
                    break;

                }
            }
        }
        if(s1==s)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}