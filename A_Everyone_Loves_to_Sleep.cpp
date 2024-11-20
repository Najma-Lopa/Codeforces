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
    cin >> t;
    while (t--)
    {
        int n, h, m;
        cin >> n >> h >> m;
        int p = (h * 60) + m;
        int a, b, c, d, e, f;
        int minn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            c = (a * 60) + b;
            d=c-p;
            if(d<0)
            {
                d=d+(24*60);
            }
            minn = min(minn, d);
        }
        e=minn/60;
        f=minn%60;
        cout << e << " " << f << endl;
    }
}




//     {
//         int n,h,m;
//         cin>>n>>h>>m;
//         int vlad=(h*60)+m;
//         int alarm,hr,mi,next,mini;
//         mini=(24*60)+60;
//         for(int i=0; i<n; i++)
//         {
//             int a,b;
//             cin>>a>>b;
//             alarm = (a*60)+b;
//             next = alarm-vlad;
//             if(next<0)
//             next += 24*60;
//             mini = min(next,mini);


//         }
//         hr = (mini/60);
//         mi=mini%60;
//         cout<<hr<<" "<<mi<<endl;

//     }

//     return 0;
// }