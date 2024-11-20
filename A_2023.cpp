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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll mul=1;
        for( int i=0;i<n;i++)
        {
            mul*=arr[i];
        }
        if(2023%mul==0)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++)
            {
                cout<<"1"<<" ";
            }
            cout<<(2023/mul)<<" "<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}



