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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int r = 0, g = 0, b = 0;
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'r')
                r++;
            if (s[i] == 'g')
                g++;
            if (s[i] == 'b')
                b++;
            if (s[i] == 'R' && r != 1)
                flag = 1;
            if (s[i] == 'G' && g != 1)
                flag = 1;
            if (s[i] == 'B' && b != 1)
                flag = 1;
        }
        if (flag == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}