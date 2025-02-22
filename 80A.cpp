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

// Function to perform bit stuffing
string bitStuffing(const string &input)
{
    string stuffed = ""; // Resultant string after bit stuffing
    int count = 0;       // Counter for consecutive 1's

    for (char bit : input)
    {
        if (bit == '1')
        {
            count++;
            stuffed += bit;
            // Stuff a '0' after five consecutive 1's
            if (count == 5)
            {
                stuffed += '0';
                count = 0; // Reset the counter
            }
        }
        else
        {
            stuffed += bit;
            count = 0; // Reset the counter if bit is 0
        }
    }
    return stuffed;
}

// Function to perform bit unstuffing
string bitUnstuffing(const string &input)
{
    string unstuffed = ""; // Resultant string after bit unstuffing
    int count = 0;         // Counter for consecutive 1's

    for (char bit : input)
    {
        if (bit == '1')
        {
            count++;
            unstuffed += bit;
            // Skip the stuffed 0 after five consecutive 1's
            if (count == 5)
            {
                continue;
            }
        }
        else
        {
            unstuffed += bit;
            count = 0; // Reset the counter if bit is 0
        }
    }
    return unstuffed;
}

int main()
{
    string data;
    cout << "Enter the binary data to be transmitted: ";
    cin >> data;

    string stuffedData = bitStuffing(data);
    cout << "Data after bit stuffing: " << stuffedData << endl;

    string unstuffedData = bitUnstuffing(stuffedData);
    cout << "Data after bit unstuffing: " << unstuffedData << endl;

    return 0;
}
