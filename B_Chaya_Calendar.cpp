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
        int r=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>r)
            {
                r =arr[i];
            }
            else
            {
                int p=r/arr[i];
                p++;
                r=p*arr[i];
            }
        }
        cout<<r<<endl;
    }
}