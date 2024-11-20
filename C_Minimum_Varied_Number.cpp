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
        int sum = 0;
        string s;
        for (int i = 9; i > 0; i--)
        {
            //n=n- i;
            if (sum +i <= n)
            {
                sum+=i;
                s += i + '0';
                
            }
        }
       
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
}