#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,c1=0,c2=0,i;
        cin >> n;
        int a[n];
        for(i=0; i<n; ++i)
        {
            cin >> a[i];
            if(a[i]==1)
                c1++;
            else c2++;
        }
        if(c1!=0 && c1%2==0)
            cout<<"YES"<<endl;
        else if(c1==0 && c2%2==0)
            cout <<"YES"<<endl;

        else cout <<"NO"<<endl;
    }
}

