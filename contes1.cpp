#include<bits/stdc++.h>
using namespace std;
#define optimise() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimise();
    int t;
    cin>>t;
    for(int i=1; i<=t; i++ )
    {
        long long int n,m,sum=0;
        cin>>n>>m;
        int ar[n];
        for(int j=0; j<n; j++)
        {
            cin>>ar[j];
                sum+=ar[j];

        }
        sum = sum/m;
        int cnt=0;
        for(int k=0; k<n; k++)
        {
            cnt+=ar[k];
            if(cnt>=sum)
                break;
        }


        cout<< "Case "<<i<<": "<<cnt<< "\n";


    }

}
