#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int cnt=0;
    int max=0;
    string ans;
    for(int i=0; i<t-1; i++)
    {
        cnt=0;
        for(int j=0; j<t-1; j++)
        {
            if(s[i]==s[j]&&s[i+1]==s[j+1])
            {
                cnt++;
                if(max<cnt)
                {
                    max=cnt;
                    ans=string(1,s[i])+string(1,s[i+1]);
                }
            }
        }
    }
    cout<<ans<<endl;
}
