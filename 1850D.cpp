#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (x*x*x-x-1);
}
int main()
{
    double x1,x2,xn,pre,cur;
    cout<<"Enter anynumber : ";
    cin>>x1>>x2;
    if((f(x1)*f(x2))>0)
    {
        cout<<"erroir"<<endl;
    }
    else
    {
        while(abs(x2-x1)>=0.0001)
        {
            xn=(x1+x2)/2;
            if(f(xn)*f(x1)>0)
                x1=xn;
            else
                x2=xn;
        }
        cout<<xn<<endl;
    }
}
