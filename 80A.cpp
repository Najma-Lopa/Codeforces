#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int a,b;
    cin>>a >>b;
    int flag=0;
    for(int i=0;i<15;i++)
    {
            if(ar[i]==a)
            {
                if(ar[i+1]==b)
                    flag=1;
                    else
                        flag=0;
            }
    }
            if(flag==1)
                cout<< "YES";
            else
                cout<< "NO";
}
