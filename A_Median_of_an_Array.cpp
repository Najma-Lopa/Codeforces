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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        double mideInd=n/2.0;
       // cout<<mideInd;
       int ind;
        if(mideInd>(n/2))
        {
            ind=mideInd+1;
        }
        else
        ind=mideInd;
        //cout<<ind;
        int value=arr[ind-1];
        int cnt=1;
        for(int i=ind;i<n;i++)
        {
            if(arr[i]<value+1)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
}