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
    cin>>t;
    if(t%2==1)
    cout<<"-1"<<endl;
    else
    {
        for(int i=1;i<=t;i=i+2)
        {
            cout<<i+1<<" "<<i<<" ";

        }
        cout<<endl;
    }
}