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
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
        ll time=0;
        ll p,q,minn;
        for (int i = 0; i < a; i++)
        {
           p=(arr[i]-time)*c;
           minn=min(p,d);
           b=b-minn;
           time=arr[i];
        }
        
            if (b > 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }