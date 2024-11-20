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
        int a, b, c, d, e, f, g, h;
        cin >> a >> b >> c >> d >> e >> f >> g >> h;
        int ans;
        if(a==c)
         ans =  abs(b - d) * abs(b - d);
        else if (a == e)
        {
             ans= abs(b - f) * abs(b - f);  
        }
        else if (a ==g)
        {
            ans= abs(b - h) * abs(b - h);
           
        }
        else if (c == e)
        {
          ans= abs(d - f) * abs(d - f);
            
        }
        else if (e == g)
        {
            ans=abs(h - f) * abs(h - f);
           
        }
        else if (c == g)
        {
           ans=abs(d - h) * abs(d - h);
           
        }
        cout<<ans<<endl;
    }
}