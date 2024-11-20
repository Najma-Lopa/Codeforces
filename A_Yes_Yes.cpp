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
        string m_s="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        string s;
        cin>>s;
        if (m_s.find(s) != -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
}

// #include<bits/stdc++.h>
// #define optimize() ios_base::sync_with_stdio(0);
// using namespace std;
// int main()
// {
//     optimize();
//      int t,n,i,j;
//      string s;
//      cin>>t;
//      while(t--){
//         string s1="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
//         cin>>s;
//         if(s1.find(s)!=-1)
//         cout<<"YES\n";
//         else cout<<"NO\n";
//      }
// }