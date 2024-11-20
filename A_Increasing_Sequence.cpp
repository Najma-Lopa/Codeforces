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
        vector<ll>v;
        ll a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        vector<ll>vb;
        int k=1;
        for(auto u:v)
        {
            
            if(u==k)
            {
                //flag=1;
                u=k+1;
                k++;
            }
            else
            {
                u=k;
                //k++;
            }
            k++;
            // if(flag==0)
            // {
                vb.push_back(u);
            //}
        }
        cout<<vb[n-1]<<endl;
    }
}