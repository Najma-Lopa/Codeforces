// //* Bismillahir Rahmanir Rahim *\

// #include <bits/stdc++.h>
// using namespace std;

// #define optimize()                \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define fraction()                \
//     cout.unsetf(ios::floatfield); \
//     cout.precision(10);           \
//     cout.setf(ios::fixed, ios::floatfield);
// #define mem(arr, k) memset(arr, k, sizeof(arr))
// #define MOD 1000000007
// #define sqr(a) ((a) * (a))
// #define endl "\n"
// typedef long long ll;
// typedef double dd;
// const double PI = acos(-1);
// const double eps = 1e-9;
// const int inf = 2000000000;
// const ll infLL = 9000000000000000000;
// const int N = 2e5 + 123;
// ll prfSum[N];

// ll gcd(ll a, ll b) { return __gcd(a, b); }
// ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

// void solve()
// {
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     char ch=s[0];
//     ll cnt=0,cntt=0;
//     for(int i=0;i<s.size();i++)
//     {
//         if(s[i]=='O')
//         {
//             cnt++;
//         }
//         else
//         cntt++;
//     }
//     if(cntt>2 && (s[0]=='L' || s[n-1]=='L'))
//     {
//         cout<<2<<endl;
//     }
//     else if(cnt>2 && (s[0]=='O' || s[n-1]=='O'))
//     {
//         cout<<2<<endl;
//     }
//     else if(cntt==2 && ((s[0]=='L' && s[n-1]!='L')|| (s[0]!='L' && s[n-1]=='L')))
//     cout<<"2"<<endl;
//     else if(cnt==2 && ((s[0]=='O' && s[n-1]!='O')||(s[0]!='O' && s[n-1]=='O')))
//     cout<<"2"<<endl;
//     else
//     cout<<-1<<endl;
// }

// int main()
// {
//     optimize();

//     int t = 1;
//     // cin>>t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }




// // ll n;
// //    cin>>n;
// //    string s;
// //    cin>>s;
// //    map<char,ll>mp,sp;
// //    for(int i=0;i<s.size();i++)
// //    sp[s[i]]++;
// //    ll x=-1;
// //    for(int i=0;i<n;i++)
// //    {
// //        sp[s[i]]--;
// //        mp[s[i]]++;
// //        if(mp['L']!=sp['L'] && mp['O']!=sp['O'] && (sp['L']+sp['O'])>0)
// //        {
// //            x=i+1;
// //            break;
// //        }
// //    }
// //    cout<<x<<endl;


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
    int n;
    string p;
    cin >> n;
    cin >> p;
    for (int k = 1; k < n; ++k) {
        int l = 0, o = 0;
        int kk = 0, lll = 0;
        for (int i = 0; i < k; ++i) {
            if (p[i] == 'L') {
                ++l;
            } else {
                ++o;
            }
        }
        for (int i = k; i < n; ++i) {
            if (p[i] == 'L') {
                ++kk;
            } else {
                ++lll;
            }
        }
        if (l != kk && o != lll) {
            cout << k << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
