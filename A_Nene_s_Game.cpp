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
        int k,q;
        cin>>k>>q;
        int arr[k],array[q];
        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<q;i++)
        {
            cin>>array[i];
        }
        sort(arr,arr+k);
        for(int i=0;i<q;i++)
        {
           if(array[i]<arr[0])
           cout<<array[i]<<" ";
           else
           cout<<arr[0]-1<<" ";
        }
        cout<<endl;
    }
}