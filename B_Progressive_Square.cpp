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
        int n,c,d;
        cin>>n>>c>>d;
        int m=n*n;
        int arr[m+5];
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+m);
        int mat[n][n];
        //mat[0][0]=arr[0];
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0&&j==0)
                {
                    mat[0][0]=arr[0];
                }
                else if(i==0)
                {
                    mat[i][j]=mat[i][j-1]+d;
                }
                else
                {
                    mat[i][j]=mat[i-1][j]+c;
                }
                v.push_back(mat[i][j]);
            }
        }
        sort(v.begin(),v.end());
        int flag=0;
        for(int i=0;i<m;i++)
        {
            if(v[i]!=arr[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}