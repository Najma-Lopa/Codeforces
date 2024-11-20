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
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int b1,b2,b3;
    cin>>b1>>b2>>b3;
    int n;
    cin>>n;
    int suma=0;
    suma=a1+a2+a3;
    int p;
    if(suma%5==0)
    {
        p=suma/5;
    }
    else
    {
        p=suma/5+1;
    }
    int sumb=0,q;
    sumb=b1+b2+b3;
    if(sumb%10==0)
    {
        q=sumb/10;
    }
    else
    {
        q=sumb/10+1;
    }
    int z=p+q;
    if(z<=n)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}