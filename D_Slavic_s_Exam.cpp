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
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.size();
        int l2=s2.size();
        //cout<<l1<<" "<<l2<<endl;
        int j=0;
        for(int i=0;i<l1;i++)
        {
            if(s1[i]==s2[j])
            {
                j++;
            }
            else if(s1[i]=='?' && j<l2)
            {
                s1[i]=s2[j];
                j++;
            }
            else if(s1[i]=='?' && j>=l2)
            {
                s1[i]='l';
            }
        }
        //cout<<j<<" "<<endl;
        if(j==l2)
        {
            cout<<"YES"<<endl;
            for(int i=0;i<s1.size();i++)
            {
                cout<<s1[i];
            }
            cout<<endl;
        }
        
        else
        cout<<"NO"<<endl;
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
// string s, t;
// int n, m;

// bool check()
// {
//     int k = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == t[k])
//         {
//             k++;
//         }
//         else if (s[i] == '?' && k < m)
//         {
//             s[i] = t[k];
//             k++;
//         }
//         else if (s[i] == '?' && k >= m)
//         {
//             s[i] = 'a';
//         }
//     }
//     cout<<k<<" ";
//     if (k == m)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// void solve()
// {
//     cin >> s >> t;
//     n = s.size();
//     m = t.size();

//     if (check())
//     {
//         cout << "YES" << endl
//              << s << endl;
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