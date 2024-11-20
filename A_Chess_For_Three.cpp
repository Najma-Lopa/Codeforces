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
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        int sum=(a+b+c);
        if(sum%2==0)
        {
            int v=sum/2;
            int n=a+b;
            int minn=min(v,n);
            cout<<minn<<endl;
        }
        else 
        {
            cout<<"-1"<<endl;
        }
    }
}