//* بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define fl float

int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b,c,d,e,f,g,h,I,j;
        int a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,g1=0,h1=0,i1=0,j1=0;
        if(n==2)
        {
            cin>>a>>b;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='1')
                {
                    a1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(b[i]=='1')
                {
                    b1++;
                }
                // else
                // break;
            }
            if(a==b)
            cout<<"SQUARE"<<endl;
        }
        else if(n==3)
        {
            cin>>a>>b>>c;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='1')
                {
                    a1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(b[i]=='1')
                {
                    b1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(c[i]=='1')
                {
                    c1++;
                }
                // else
                // break;
            }
            if((a1>=2&&a1==b1)||(b1>=2&&b1==c1))
            cout<<"SQUARE"<<endl;
            else
            cout<<"TRIANGLE"<<endl;
            
        }
        else if(n==4)
        {
            cin>>a>>b>>c>>d;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='1')
                {
                    a1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(b[i]=='1')
                {
                    b1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(c[i]=='1')
                {
                    c1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(d[i]=='1')
                {
                    d1++;
                }
                // else
                // break;
            }
            if((a1>=2&&a1==b1)||(b1>=2&&b1==c1)||(c1>=2&&c1==d1))
            cout<<"SQUARE"<<endl;
            else
            cout<<"TRIANGLE"<<endl;
            
        }
        else if(n==5)
        {
            cin>>a>>b>>c>>d>>e;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='1')
                {
                    a1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(b[i]=='1')
                {
                    b1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(c[i]=='1')
                {
                    c1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(d[i]=='1')
                {
                    d1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(e[i]=='1')
                {
                    e1++;
                }
                // else
                // break;
            }
            if((a1>=2&&a1==b1)||(b1>=2&&b1==c1)||(c1>=2&&c1==d1)||(d1>=2&&d1==e1))
            cout<<"SQUARE"<<endl;
            else
            cout<<"TRIANGLE"<<endl;
            
        }
        else if(n==6)
        {
            cin>>a>>b>>c>>d>>e>>f;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='1')
                {
                    a1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(b[i]=='1')
                {
                    b1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(c[i]=='1')
                {
                    c1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(d[i]=='1')
                {
                    d1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(e[i]=='1')
                {
                    e1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(f[i]=='1')
                {
                    f1++;
                }
                // else
                // break;
            }
            if((a1>=2&&a1==b1)||(b1>=2&&b1==c1)||(c1>=2&&c1==d1)||(d1>=2&&d1==e1)||(e1>=2&&e1==f1))
            cout<<"SQUARE"<<endl;
            else
            cout<<"TRIANGLE"<<endl;
            
        }
        else if(n==7)
        {
            cin>>a>>b>>c>>d>>e>>f>>g;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='1')
                {
                    a1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(b[i]=='1')
                {
                    b1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(c[i]=='1')
                {
                    c1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(d[i]=='1')
                {
                    d1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(e[i]=='1')
                {
                    e1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(f[i]=='1')
                {
                    f1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(g[i]=='1')
                {
                    g1++;
                }
                // else
                // break;
            }
           if((a1>=2&&a1==b1)||(b1>=2&&b1==c1)||(c1>=2&&c1==d1)||(d1>=2&&d1==e1)||(e1>=2&&e1==f1)||(f1>=2&&f1==g1))
            cout<<"SQUARE"<<endl;
            else
            cout<<"TRIANGLE"<<endl;
            
        }
        else if(n==8)
        {
            cin>>a>>b>>c>>d>>e>>f>>g>>h;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='1')
                {
                    a1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(b[i]=='1')
                {
                    b1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(c[i]=='1')
                {
                    c1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(d[i]=='1')
                {
                    d1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(e[i]=='1')
                {
                    e1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(f[i]=='1')
                {
                    f1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(g[i]=='1')
                {
                    g1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(h[i]=='1')
                {
                    h1++;
                }
                // else
                // break;
            }
            if((a1>=2&&a1==b1)||(b1>=2&&b1==c1)||(c1>=2&&c1==d1)||(d1>=2&&d1==e1)||(e1>=2&&e1==f1)||(f1>=2&&f1==g1)||(g1>=2&&g1==h1))
            cout<<"SQUARE"<<endl;
            else
            cout<<"TRIANGLE"<<endl; 
            
        }
        else if(n==9)
        {
            cin>>a>>b>>c>>d>>e>>f>>g>>h>>I;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='1')
                {
                    a1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(b[i]=='1')
                {
                    b1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(c[i]=='1')
                {
                    c1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(d[i]=='1')
                {
                    d1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(e[i]=='1')
                {
                    e1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(f[i]=='1')
                {
                    f1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(g[i]=='1')
                {
                    g1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(h[i]=='1')
                {
                    h1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(I[i]=='1')
                {
                    i1++;
                }
                // else
                // break;
            }
            if((a1>=2&&a1==b1)||(b1>=2&&b1==c1)||(c1>=2&&c1==d1)||(d1>=2&&d1==e1)||(e1>=2&&e1==f1)||(f1>=2&&f1==g1)||(g1>=2&&g1==h1)||(h1>=2&&h1==i1))
            cout<<"SQUARE"<<endl;
            else
            cout<<"TRIANGLE"<<endl; 
            
        }
        else if(n==10)
        {
            cin>>a>>b>>c>>d>>e>>f>>g>>h>>I>>j;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='1')
                {
                    a1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(b[i]=='1')
                {
                    b1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(c[i]=='1')
                {
                    c1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(d[i]=='1')
                {
                    d1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(e[i]=='1')
                {
                    e1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(f[i]=='1')
                {
                    f1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(g[i]=='1')
                {
                    g1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(h[i]=='1')
                {
                    h1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(I[i]=='1')
                {
                    i1++;
                }
                // else
                // break;
            }
            for(int i=0;i<n;i++)
            {
                if(j[i]=='1')
                {
                    j1++;
                }
                // else
                // break;
            }
           if((a1>=2&&a1==b1)||(b1>=2&&b1==c1)||(c1>=2&&c1==d1)||(d1>=2&&d1==e1)||(e1>=2&&e1==f1)||(f1>=2&&f1==g1)||(g1>=2&&g1==h1)||(h1>=2&&h1==i1)||(i1>=2&&i1==j1))
            cout<<"SQUARE"<<endl;
            else
            cout<<"TRIANGLE"<<endl; 
             
            
        }
        
    }
}