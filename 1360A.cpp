#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,cnt=1;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
            cnt++;
            if(s[i]!=s[i+1]&&cnt<7)
            cnt=1;
   }
   if(cnt>=7)
       cout<< "YES";
   else
        cout<< "NO";
}
