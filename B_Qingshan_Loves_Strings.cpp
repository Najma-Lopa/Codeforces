// // بِسْمِ ٱللَّهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// #include <bits/stdc++.h>
// using namespace std;

// #define optimize()                \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define endl '\n'
// #define ll long long

// int main()
// {
//     optimize();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b;
//         cin >> a >> b;
//         string s, t;
//         cin >> s >> t;
//         if (a == 1 && b == 1)
//             cout << "Yes" << endl;
//         else
//         {
//             int flg = 0;
//             for (int i = 0; i < a; i++)
//             {
//                 if (s[i] == s[i + 1])
//                 {
//                     flg = 1;
//                     break;
//                 }
//             }
//             if (flg == 0)
//                 cout << "Yes" << endl;
//             else
//             {
//                 int flag=0;
//                 if (t[0] == t[b - 1])
//                 {
//                     for (int i = 0; i < b - 1; i++)
//                     {
//                         if (t[i] == t[i + 1])
//                         {
//                             flag = 1;
//                             break;
//                         }
//                     }
//                 }
//                 else flag=1;
//                 int flagg = 0;
//                 if(flag=0)
//                 {
//                 for (int i = 0; i < a - 1; i++)
//                 {
//                     if (s[i] == s[i + 1])
//                     {
//                         if (s[i] == t[0])
//                         {
//                             flagg = 1;
//                             break;
//                         }
//                     }
//                 }
//                 if (flagg == 1)
//                     cout << "No" << endl;
//                 else
//                     cout << "Yes" << endl;
//             }
//             else
//             cout<<"No\n";
//             }
//         }
//     }
// }

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
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s, t;
        cin >> s >> t;
        int mp = 0;
        for (int i = 0; i < a - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                mp = 1;
                break;
            }
        }
        if (mp == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            if (b == 2 || t[0] != t[b - 1])
            {
                cout << "No" << endl;
            }
            else
            {
                mp = 0;
                for (int i = 0; i < b - 1; i++)
                {
                    if (t[i] == t[i + 1])
                    {
                        mp = 1;
                        break;
                    }
                }
                if (mp == 1)
                {
                    cout << "No" << endl;
                }
                else
                {
                    int f = 0;
                    for (int i = 0; i < a - 1; i++)
                    {
                        if (s[i] == s[i + 1])
                        {
                            if (t[0] == s[i])
                            // cout << "No" << endl;
                            {
                                f = 1;
                                break;
                            }
                        }
                    }
                    if (f == 1)
                        cout << "No" << endl;
                    else
                        cout << "Yes" << endl;
                }
            }
        }
    }
}