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
        ll n;
        cin >> n;
        ll a = (n - 1) - 2;
        ll b,c;
        if ((a % 3 != 0))
        {
            b = 2;
            c = (n - 1) - 2;
            if(b<0||b==c||b==1||c==1||c<0)
            cout<<"NO"<<endl;
            else
            {
            cout << "YES" << endl;
            cout << "1"
                 << " " << b << " " << c << endl;
            }
        }
        else if (((n - 1) - 4) % 3 != 0)
        {
            b = 4;
            c = (n - 1) - 4;
            if(b<0||b==c||b==1||c==1||c<0)
            cout<<"NO"<<endl;
            else
            {
            cout << "YES" << endl;
            cout << "1"
                 << " " << b << " " << c << endl;
            }
        }
        else if (((n - 1) - 5) % 3 != 0)
        {
            b = 5;
            c = (n - 1) - 5;
            if(b<0||b==c||b==1||c==1||c<0)
            cout<<"NO"<<endl;
            else
            {
            cout << "YES" << endl;
            cout << "1"
                 << " " << b << " " << c << endl;
            }
        }
        else if (((n - 1) - 7) % 3 != 0)
        {
            b = 7;
            c = (n - 1) - 7;
           if(b<0||b==c||b==1||c==1||c<0)
            cout<<"NO"<<endl;
            else
            {
            cout << "YES" << endl;
            cout << "1"
                 << " " << b << " " << c << endl;
            }
        }
        else if (((n - 1) - 8) % 3 != 0)
        {
            b = 8;
            c = (n - 1) - 8;
          if(b<0||b==c||b==1||c==1||c<0)
            cout<<"NO"<<endl;
            else
            {
            cout << "YES" << endl;
            cout << "1"
                 << " " << b << " " << c << endl;
            }
        }
        else
            cout << "NO" << endl;
    }
}