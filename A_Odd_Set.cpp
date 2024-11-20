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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        pair<int,int>p[n];
        int flag=0;
        for(int i=0;i<n;i++)
        {
           cin>>p[i].first>>p[i].second;   
        }
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
        if(p[i].first%2==0)//&&p[i].second%2!=0||p[i].first%2!=0&&p[i].second%2==0)
           cnt1++; 
         if(p[i].second%2!=0)
           cnt2++;
        }
        if(cnt1==cnt2)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}