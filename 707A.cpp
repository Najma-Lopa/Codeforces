#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    char ch;
    int d=n*m;
    for(int i=0;i<d;i++)
    {
       cin>>ch;
       if(ch==67|| ch==77||ch==89)
         {count++;}
    }
    if(count>0)
        cout<<"#Color"<< " ";
    else
        cout<<"#Black&White"<< " ";
}
