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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int d=n%7;
        int p=7-d;
        int r=n%10;
        int q=(p+1)*7;
        if(d==0)
        cout<<n<<endl;
        else if(r+p<10)
        cout<<n+p<<endl;
        else
        cout<<n-d<<endl;
    }
}



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int rem = n % 7;
//         int need = 7 - rem;
//         int last_digit = n % 10;

//         if (n % 7 == 0)
//         {
//             cout << n << endl;
//         }
//         else if (last_digit + need < 10)
//         {
//             cout << n + need << endl;
//         }
//         else
//         {
//             cout << n - rem << endl;
//         }
//     }
// }