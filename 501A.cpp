#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a >>b >>c >>d;
    int M=max((3*a/10),(a-(a/250)*c));
    int V=max((3*b/10),(b-(b/250)*d));
    if(M>V)
        cout<< "Misha"<<endl;
    else if(V>M)
        cout<< "Vasya"<<endl;
    else
        cout<<"Tie"<<endl;
}
