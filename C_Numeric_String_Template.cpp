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
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int l;
            cin>>l;
            v.push_back(l);
        }

        int q;
        cin >> q;
        while (q--) {
            string s;
            cin >> s;
             map<int, char> m1;
            map<char, int> m2;

            if (s.size() != n) {
                cout << "NO\n";
                continue;
            }

           
            bool same = true;

            for (int i = 0; i < n; i++) {
                

                if (m1.count(v[i]) && m1[v[i]] != s[i]) {
                    same = false;
                    //cout<<m1.count(v[i])<<endl;
                    break;
                }
                if (m2.count(s[i]) && m2[s[i]] != v[i]) {
                    same = false;
                    break;
                }

                m1[v[i]] = s[i];
                m2[s[i]] = v[i];
            }
            //cout<<m1.count(num);

            if (same==true) {
                cout << "YES"<<endl;
            } else {
                cout << "NO"<<endl;
            }
        }
    }
}
