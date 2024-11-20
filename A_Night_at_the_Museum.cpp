#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    int cnt=0,k;
    cin>>s;
    k=abs(s[0]-'a');
    if(k>13) cnt+=abs(26-k);
    else cnt+=k;
    for(int i=1;i<s.size();i++)
    {
         k=abs(s[i]-s[i-1]);
         if(k>13) cnt+=abs(26-k);
         else cnt+=k;
    }
cout<<cnt<<endl;
    return 0;
}
