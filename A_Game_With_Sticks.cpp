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
    int n,m;
    cin>>n>>m;
    int cnt=0;
    while(n*m!=0)
    {
        int ans=n*m;
        cnt++;
        n--;m--;
    }
    if(cnt%2!=0)
    {
        cout<<"Akshat"<<endl;
    }
    else
    cout<<"Malvika"<<endl;
}