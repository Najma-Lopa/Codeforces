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
    int arr[t];
    map<int,int>m;
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    int maxx=0;
    for(auto u:m)
    {
        maxx=max(maxx,u.second);
    }
    cout<<maxx<<endl;
}