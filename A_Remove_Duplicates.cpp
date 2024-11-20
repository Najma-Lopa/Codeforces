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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    int cnt=0,j,k;
    for (int i=0; i<n; i++)
    {
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
        if (i == j)
       { cnt++;
       for( k=0;k<n/2;k++)
       {
        int tmp=arr[k];
        arr[k]=arr[n-k-1];
        arr[n-k-1]=tmp;
       }
          cout << arr[k] << " ";
          }
    }
    cout<<cnt<<endl;

}