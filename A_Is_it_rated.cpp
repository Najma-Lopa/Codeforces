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
    int n;
    cin>>n;
    vector<pair<int, int>> vp;
    
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin>>a>>b;
    vp.push_back({a, b});
    }

    for(auto u:vp)
    {
        if(u.first!=u.second)
        {
            cout<<"rated"<<endl;
            return 0;
        }
    }
    vector<pair<int,int>>v=vp;
    sort(v.rbegin(),v.rend());
    if(v==vp)
    {
        cout<<"maybe"<<endl;
    }
    else
    {
        cout<<"unrated"<<endl;
    }
}