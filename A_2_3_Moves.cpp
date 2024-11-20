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
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        cout<<"2"<<endl;
        // else if(n%2==0&&n%3==1)
        // {
        //     cout<<n/2<<endl;
        // }
        else if(n%3==0)
        cout<<n/3<<endl;
        else
        {
            ll d=n%3;
            ll p=n/3;
            ll q=d/2;
            if(q<1)
            cout<<p+q+1<<endl;
            else
            cout<<p+q<<endl;
        }

    }
}