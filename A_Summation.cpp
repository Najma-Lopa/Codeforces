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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    optimize();
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    if(sum<0)
    {
        cout<<sum*(-1)<<endl;
    }
    else
    cout<<sum<<endl;
}