#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<pair<pair<int,int>,int>>p;
    for(int i=1;i<=n;i++)
    {
      int a,b;
      cin>>a >>b;
      p.push_back({{a,b},i});
    }

    vector<pair<pair<int,int>,int>>v;
    
    for(auto u:p)
    {
        // cout<<u.first<< " "<<u.second<<endl
        if(u.first.first<=10)
        {
            v.push_back(u);
        }
    }

    // for(auto u:v)
    // {
    //     cout<<u.first.first<<" "<<u.first.second<<" "<<u.second<<endl;
    // }

    int max=INT_MIN;
    for(auto u:v)
    {
      if(max<u.first.second)
      max=u.second;
    }
    cout<<max<<endl;
    }
    
}
