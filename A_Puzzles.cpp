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
    int a,t;
    cin>>a>>t;
    int minn=10000;
    int arr[t+10];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+t);
    int dif;
    for(int i=0;i<t-a+1;i++)
    {
        // cout<<arr[i]<<" ";
        dif=arr[i+a-1]-arr[i];
        if(dif<minn)
        minn=dif;
    }
    cout<<minn<<endl;
}



// #include<bits/stdc++.h>
// #define optimize() ios_base::sync_with_stdio(0);
// using namespace std;
// int main()
// {
//      optimize();
//      int n,m,i;
//      cin>>n>>m;
//      int arr[m+5];
//      for(i=0;i<m;i++){
//         cin>>arr[i];
//      }
//      sort(arr,arr+m);
//      int a=999999;
//      for(i=0;i<m-n+1;i++)
//      {
//          int b=arr[i+n-1]-arr[i];
//          if(b<a)
//             a=b;
//      }
//      cout<<a;
// }
