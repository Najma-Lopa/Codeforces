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
    int n;
    cin>>n;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum=a+b+c+d;
    int position=1;
    for(int i=2;i<=n;i++)
    {
        cin>>a>>b>>c>>d;
        if((a+b+c+d)>sum)
        position++;
    }
    cout<<position<<endl;
}
