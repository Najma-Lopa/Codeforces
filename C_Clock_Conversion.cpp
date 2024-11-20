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
        string s;
        cin >> s;
        int a = stoi(s);
        // cout<<a;
        int c;
        int f = s[3] - '0';
        if (a < 12 && a > 0)
        {
            // if(a<10)
            cout << s << " "
                 << "AM" << endl;
        }
        else if (a > 12 && a > 0)
        {
            int b = s[0] - '0';
            c = s[1] - '0';
            if (b==1&&c == 3)
            {
                // int d=3-2;
                cout << "01";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
            if (c == 4)
            {
                // int d=3-2;
                cout << "02";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
            if (c == 5)
            {
                int d = 3 - 2;
                cout << "03";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
            if (c == 6)
            {
                int d = 3 - 2;
                cout << "04";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
            if (c == 7)
            {
                int d = 3 - 2;
                cout << "05";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
            if (c == 8)
            {
                int d = 3 - 2;
                cout << "06";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
            if (c == 9)
            {
                int d = 3 - 2;
                cout << "07";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
            if (c == 0)
            {
                int d = 3 - 2;
                cout << "08";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
            if (c == 1)
            {
                // int d=3-2;
                cout << "09";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
            if (b==2&&c == 2)
            {
                int d = 3 - 2;
                cout << "10";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
            if (b==2&&c == 3)
            {
                int d = 3 - 2;
                cout << "11";
                for (int i = 2; i < s.size(); i++)
                {
                    cout << s[i];
                }

                cout << " "
                     << "PM" << endl;
            }
        }

        if (a == 12)
        {
            cout << s << " "
                 << "PM" << endl;
        }
        //  if(a==12&&f==0)
        //  {

        //     cout<<s<<" "<<"PM"<<endl;
        //  }

        if (a == 0)
        {
            int d = 3 - 2;
            cout << "12";
            for (int i = 2; i < s.size(); i++)
            {
                cout << s[i];
            }

            cout << " "
                 << "AM" << endl;
        }
    }
}
