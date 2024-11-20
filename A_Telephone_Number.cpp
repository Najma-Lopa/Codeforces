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
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int flag = 0, ind;
        if (n < 11)
            cout << "NO" << endl;
        else
        {
            int d = n - 11;
            for (int i = 0; i < s.size(); i++)
            {
                // if (n == 11 && s[1] == '8')
                //     flag = 1;
                 if (s[i] == '8')
                {
                    ind = i;
                    if (i <= d)
                        flag = 1;
                }
            }
            if (flag == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}