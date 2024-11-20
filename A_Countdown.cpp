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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if((s[i]-'0')!=0)
            {
                cnt++;
            }
            sum=sum+(s[i]-'0');
        }
        // cout<<cnt<<endl;
        // cout<<sum<<endl;
        // cout<<s[n-1]<<endl;
        if((s[n-1]-'0')==0)
        cout<<sum+cnt<<endl;
        else
        cout<<sum+cnt-1<<endl;

    }
}