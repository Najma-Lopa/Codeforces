#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        vector<int>v;
        cin>>n;
        if(n%10!=0)
        {
            v.push_back(n%10);
        }
        int d=n%10;
        n=n-d;
        if(n%100!=0)
        {

                v.push_back(n%100);

        }
        d=n%100;
        n=n-d;
        if(n%1000!=0)
        {

                v.push_back(n%1000);

        }
        d=n%1000;
        n=n-d;
        if(n%10000!=0)
        {

                v.push_back(n%10000);

        }
        if(n>=10000&&n%10000==0)
          {
              v.push_back(n);}
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
