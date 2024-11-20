// // بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// #include <bits/stdc++.h>
// using namespace std;

// #define optimize()                \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define endl '\n'
// #define ll long long

// bool isVowel(char ch)
// {
//     if (ch == 'a' || ch == 'e')
//     {
//         return true;
//     }

//     return false;
// }

// bool isConsonants(char ch)
// {
//     if (ch == 'b' || ch == 'c' || ch == 'd')
//     {
//         return true;
//     }

//     return false;
// }
// void solve(int n,string s)
// {
    
//         vector<char> v;
//         int i = 0;
//         int k = n;
//         while (n--)
//         {
//             if (isConsonants(s[i]) && isVowel(s[i + 1]))
//             {

//                 if (isConsonants(s[i + 2]) && isConsonants(s[i + 3]))
//                 {
//                     v.push_back(s[i]);
//                     v.push_back(s[i + 1]);
//                     v.push_back(s[i + 2]);
//                     v.push_back('.');
//                     i += 3;
//                 }
//                 else
//                 {
//                     v.push_back(s[i]);
//                     v.push_back(s[i + 1]);
//                     v.push_back('.');
//                     i += 2;
//                 }
//                 // cout << i << endl;
//             }
//         }

//         if (i == k)
//         {
//             v.erase(v.begin() + v.size() - 1);
//         }
//         else
//         {
//             v.erase(v.begin() + v.size() - 1);
//             v.push_back(s[i]);
//         }

//         for (auto u : v)
//         {
//             cout << u;
//         }
//         cout << endl;
// }

// int main()
// {
//     optimize();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string st;
//         cin >> st;
//         solve(n,st);
//     }
// }






// بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long

bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e')
    {
        return true;
    }

    return false;
}

bool isConsonants(char ch)
{
    if (ch == 'b' || ch == 'c' || ch == 'd')
    {
        return true;
    }

    return false;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<char> v;
        int i = 0;
        int k = n;
        while (n--)
        {
            if (isConsonants(s[i]) && isVowel(s[i + 1]))
            {

                if (isConsonants(s[i + 2]) && isConsonants(s[i + 3]))
                {
                    v.push_back(s[i]);
                    v.push_back(s[i + 1]);
                    v.push_back(s[i + 2]);
                    v.push_back('.');
                    i += 3;
                }
                else
                {
                    v.push_back(s[i]);
                    v.push_back(s[i + 1]);
                    v.push_back('.');
                    i += 2;
                }
                // cout << i << endl;
            }
        }

        if (i == k)
        {
            v.erase(v.begin() + v.size() - 1);
        }
        else
        {
            v.erase(v.begin() + v.size() - 1);
            v.push_back(s[i]);
        }

        for (auto u : v)
        {
            cout << u;
        }
        cout << endl;
    }
}