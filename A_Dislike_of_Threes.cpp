#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<1667;i++)
    {
        if(i%3!=0&&i%10!=3)
        {v.push_back(i);}
    }
    int t;
    cin>>t;
    int index;
    while(t--)
    {
        cin>>index;
        index--;
        cout<<v[index]<<endl;
    }

}