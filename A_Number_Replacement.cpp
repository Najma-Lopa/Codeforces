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
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    string st;
    cin>>st;
    vector<pair<int,char>>v;
    for(int i=0;i<n;i++)
    {
        v.push_back({array[i],st[i]});
    }

    // for(auto u:v)
    // {
    //     cout<<u.first<<" "<<u.second<<endl;
    // }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[i].first==v[j].first&&v[i].second!=v[j].second)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
}