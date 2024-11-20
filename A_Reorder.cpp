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
        int m,n;
        cin>>m>>n;
        int arr[m];
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<m;i++)
        {
           sum=sum+arr[i]; 
        }
        if(sum==n)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
}