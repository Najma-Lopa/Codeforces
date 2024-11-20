// //* بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ

// #include <bits/stdc++.h>
// using namespace std;

// #define optimize()                \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define endl '\n'
// #define ll long long
// #define fl float

// int main()
// {
//     optimize();
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         vector<char> v;
//         vector<char> ch;
//         int flag = 0, ind;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (s[0] == '0' || s[0] == '1' || s[0] == '2' || s[0] == '3' || s[0] == '4' || s[0] == '5' || s[0] == '6' || s[0] == '7' || s[0] == '8' || s[0] == '9')
//             {
//                 v.push_back(s[i]);
//                 flag = 1;
//                 if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'j' || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'o' || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't' || s[i] == 'u' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
//                 {
//                     v.pop_back();
//                     ind = i;
//                     break;
//                 }
//             }
//         }
//         // for (int i = 0; i < s.size(); i++)
//         // {
//         //     if (s[0] == 'a' || s[0] == 'b' || s[0] == 'c' || s[0] == 'd' || s[0] == 'e' || s[0] == 'f' || s[0] == 'g' || s[0] == 'h' || s[0] == 'i' || s[0] == 'j' || s[0] == 'k' || s[0] == 'l' || s[0] == 'm' || s[0] == 'n' || s[0] == 'o' || s[0] == 'p' || s[0] == 'q' || s[0] == 'r' || s[0] == 's' || s[0] == 't' || s[0] == 'u' || s[0] == 'v' || s[0] == 'w' || s[0] == 'x' || s[0] == 'y' || s[0] == 'z')
//         //     {
//         //         ch.push_back(s[i]);
//         //         if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
//         //         {
//         //             //ch.erase(ch.begin(),ch.end());
//         //             break;
//         //         }
//         //         else
//         //         {
//         //             flag=1;
//         //         }
//         //     }
//         // }
        
//         vector<char>na;
//         na=v;
//         sort(v.begin(),v.end());
//         if (ind != n - 1)
//         {
//             for (int i = ind; i < s.size(); i++)
//             {

//                  ch.push_back(s[i]);
//             }
//         }
//         else
//         {
//             flag=1;
//         }
        
//         for(auto x:v)
//         {
//             cout<<x<<endl;
//         }
//         for(auto u:ch)
//         {
//             cout<<u<<endl;
//         }
//         vector<char>lo;
//         lo=ch;
//         sort(lo.begin(),lo.end());
//         if((flag==1 && na==v && lo==ch))
//         {
//             cout<<"YES"<<endl;
//         }
//         else
//         {
//             cout<<"NO"<<endl;
//         }
//     }
// }






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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string temp=s;
        sort(s.begin(),s.end());
        if(s==temp)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

    }
