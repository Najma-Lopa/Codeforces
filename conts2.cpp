// بِسْمِ ٱللَّهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

int main()
{
    optimize();
    string s;
    cin>>s;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0;
    int n=0,o=0,p=0,q=0,r=0,st=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A')
        a++;
        if(s[i]=='B')
        b++;
        if(s[i]=='C')
        c++;
        if(s[i]=='D')
        d++;
        if(s[i]=='E')
        e++;
        if(s[i]=='F')
        f++;
        if(s[i]=='G')
        g++;
        if(s[i]=='H')
        h++;
        if(s[i]=='I')
        i++;
        if(s[i]=='J')
        j++;
        if(s[i]=='K')
        k++;
        if(s[i]=='L')
        l++;
        if(s[i]=='M')
        m++;
        if(s[i]=='N')
        n++;
        if(s[i]=='O')
        o++;
        if(s[i]=='P')
        p++;
        if(s[i]=='Q')
        q++;
        if(s[i]=='R')
        r++;
        if(s[i]=='S')
        st++;
        if(s[i]=='T')
        t++;
        if(s[i]=='U')
        u++;
        if(s[i]=='V')
        v++;
        if(s[i]=='W')
        w++;
        if(s[i]=='X')
        x++;
        if(s[i]=='Y')
        y++;
        if(s[i]=='Z')
        z++;
    }
    int cnt=0;
    for(char i='a';i<='z';i++)
    {
        if(i%2!=0)
        cnt++;
    }
    cout<<cnt<<endl;
}