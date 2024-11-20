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
        int z=n/2;
        int p=pow(2,n);
        int sum1=0;
        int sum2=0;
        for(int i=1;i<z;i++)
        {
            p+=pow(2,i);
        }
        for(int i=z;i<n;i++)
        {
            sum2+=pow(2,i);
        }
        int sum=p-sum2;
        cout<<sum<<endl;
    }
}