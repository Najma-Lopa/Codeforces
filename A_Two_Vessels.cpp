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
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        cout<<"0"<<endl;
        else
        {
            int maxx=max(a,b);
            int minn=min(a,b);
            int cnt=0;
            while(minn<maxx)
            {
                minn=minn+c;
                maxx=maxx-c;
                cnt++;
            }
            cout<<cnt<<endl;
        }
    }
}