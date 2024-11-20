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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        ll sum = 0;
        for (auto u : v)
        {
            sum += u;
        }
        ll cnt = 0, cn = 0;
        for (auto u : v)
        {
             if (u % 3 == 1)
                cn++;
        }
        if (sum % 3 == 0)
        {
            cout << "0" << endl;
        }
        else if(sum%3==2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            if (cn>=1)
            {
                cout << "1" << endl;
            }
            else
            {
                    cout << "2" << endl;
            }
        }
    }
}