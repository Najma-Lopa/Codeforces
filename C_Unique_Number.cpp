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
        if(n<10)
        cout<<n<<endl;
        else if(n>=46)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            string s;
            for(int i=9;i>0;i--)
            {
                if(n-i>=0)
                {
                    n=n-i;
                    s+=i+'0';
                }
                if(n==0)
                {
                    break;
                }
            }
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
        
    }
}