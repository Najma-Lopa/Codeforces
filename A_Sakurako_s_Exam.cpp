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
        ll a, b;
        cin >> a >> b;

        ll ans = a * 1 + 2 * b;

        if (ans % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {

            if ((b % 2 == 0) || (a > 1))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

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
//     ll a, b;
//     cin >> a >> b;

//     ll sum = a + 2 * b;

//     if (sum % 2 != 0)
//     {
//         cout << "NO" << endl;
//         return;
//     }

//     if ((b % 2 == 0) || (a >= 2))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// int main()
// {
//     optimize();

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }