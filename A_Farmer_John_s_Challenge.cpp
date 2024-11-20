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
        int n,k;
        cin>>n>>k;
        if(n==k)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"1"<<" ";
            }
            cout<<endl;
        }
            else
            {
                if(k<2)
                {
                    for(int i=1;i<=n;i++)
                    {
                        cout<<i<<" ";
                    }
                    cout<<endl;
                }
                else
                {
                    cout<<"-1"<<endl;
                }
            }
        }
}