

#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x[10], y[10][10];
    int i, j, n;
    cout << "Enter any number : ";
    cin >> n;
    cout << "Enter all number : ";
    for (int i = 0; i < n; i++)
    {
        cout << "x[" << i << "] : ";
        cin >> x[i];
        cout << "y[" << i << "] : ";
        cin >> y[0][i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            y[i][j] = y[i- 1][j + 1] - y[i-1][j];
        }
    }
    cout << endl
         << "result output" << endl;
    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < n - i; j++)
        {
            cout << x[i];
            cout << "\t" << y[i][j];
            cout << endl;
        }
    }
}
