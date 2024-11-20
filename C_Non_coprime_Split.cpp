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
    int a,b;
    cin>>a>>b;
    int p=4;
    int d=b-4;
    if(d%2!=0)
    d=b-9;
    int minn=min(d,9);
    while(minn>0)
    {
        if(d%minn==0&&9%minn==0)
        {
            break;
        }
        minn--;
    }
    if(minn>0)
    cout<<9<<" "<<d<<endl;

}