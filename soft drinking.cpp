#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinks=k*l/nl;
    int salt=p/np;
    int toast=c*d;
    int ans=(min(min(drinks,salt),toast))/n;
    cout<<ans<<endl;
}
