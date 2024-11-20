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
    int m, n;
    cin >> m >> n;
    int arr[m];
    int array[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> array[i];
    }
    int p, q,d;
    int x=arr[0]-array[0]*n;
    if(x<0)
    x=0;
    //cout<<x<<" ";
    int sum=0;
    int ans=0;
    for (int i = 1; i < m; i++)
    {
        sum+=array[i-1];
         d = arr[i] -(sum+array[i]) * n;
        if(d<0)
        d=0;
        ans+=d;
    }
    int f_ans=ans+x;
    int y=arr[m-1]-array[m-1]*n;
    if(y<0) y=0;
    //cout<<y<<" ";
    int summ=0,l;
    int mm=0;
    for (int i = m-2; i >= 0; i--)
    {
        summ+=array[i+1];
         //cout<<array[i+1];
        //cout<<sum<<endl;
         l = arr[i] -(summ+array[i]) * n;
        if(l<0)
        l=0;
        mm+=l;
    }
    int mn=mm+y;
    if(f_ans>mn)
    cout<<"Limak"<<endl;
    else if(f_ans<mn)
    cout<<"Radewoosh"<<endl;
    else
    cout<<"Tie"<<endl;
}