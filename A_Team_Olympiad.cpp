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
    int n,a;
    vector<int>v1,v2,v3;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a;

        if(a==1)
        {
            v1.push_back(i);
        }
       else  if(a==2)
        {
            v2.push_back(i);
        }
        else
        {
            v3.push_back(i);
        }

    }
    int minn=min(min(v1.size( ),v2.size( )),v3.size( ));
    cout<<minn<<endl;
    for(int i=0; i<minn; i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
    return 0;
}

