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
        int n;
        cin>>n;
        int l,r,p;
        l=1, r=n;
        p=r-l+1;
        int arr[n+5];
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            int sum=0;
            for(int i=1;i<=n;i++)
            {
                arr[i]=i;
                sum+=arr[i];
            }
            if(sum%p==0)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                for(int i=1;i<n;i+=2)
                {
                    swap(arr[i],arr[i+1]);
                }
                for(int i=1;i<=n;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
    }
}