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
        int n;
        cin>>n;
        int a,b;
        vector<pair<int,int>>p;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            p.push_back({a,b});
        }
        int x=p[0].first;
        int y=p[0].second;
        int flag=0;
        for(int i=1;i<p.size();i++)
        {
            if(p[i].first>=x)
            {
                if(p[i].second>=y)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<p[0].first<<endl;
        }
        else
        cout<<"-1"<<endl;
    }
}