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
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        map<int,int>m;
        for(auto u:v)
        {
            m[u]++;
        }
        int p;
        int flag=0;
        for(auto u:m)
        {
            if(u.second==1)
            {
                p=u.first;
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            for(int i=0;i<n;i++)
            {
                if(p==v[i])
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }

        
    }
}