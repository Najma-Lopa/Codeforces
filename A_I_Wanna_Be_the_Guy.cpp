#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,q;
    cin>>t;
    cin>>p;
    int total[205];
   for(int i=0;i<p;i++)
   {
     cin>>total[i];
   }
   cin>>q;
   for(int i=p;i<p+q;i++)
   {
    cin>>total[i];
   }
   sort(total,total+(p+q));
   int cnt=0;
   for(int i=0;i<p+q;i++)
   {
    if(total[i]!=total[i+1])
    cnt++;
   }
   if(cnt==t)
   cout<<"I become the guy."<<endl;
   else
   cout<<"Oh, my keyboard!"<<endl;
}