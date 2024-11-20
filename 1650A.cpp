#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        char ch;
        cin>>s1;
        cin>>ch;
        int d=s1.size();
        int p=d/2;
        if(s1[p]==ch)
            cout<< "YES"<<endl;
            else
                cout<< "NO"<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, count = 0;
    cin >> t;
    while (t--)
    {
        string st1;
        cin >> st1;
        char ch;
        cin >> ch;
        int flag = 0;

        for (int i = 0; i < st1.length(); i += 2)
        {
            flag = 0;
            if (st1[i] == ch)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
