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
        int sum=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=k)
            {
                sum+=arr[i];
            }
            if(sum>0 && arr[i]==0)
            {
                sum--;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}