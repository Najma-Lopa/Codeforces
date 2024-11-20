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
        int arr[3];
        int a,b,c;
        
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+3);
        a=arr[0];
        b=arr[1];
        c=arr[2];
        int cnt=0;
        if(a>0)
        {
            cnt++;
            a--;
        }
         if(b>0)
        {
            cnt++;
            b--;
        }
        if(c>0)
        {
            cnt++;
            c--;
        }
        
         if(a>0 && c>0)
         {
         cnt++;
         a--;
         c--;
         }
         if(b>0 && c>0)
         {
         cnt++;
         b--;
         c--;
         }
         if(a>0 && b>0)
         {
         cnt++;
         a--;
         b--;
         }
         if(a>0 && b>0 && c>0)
         {
         cnt++;
         a--;
         b--;
         c--;
         }
         cout<<cnt<<endl;
         
    }
}


