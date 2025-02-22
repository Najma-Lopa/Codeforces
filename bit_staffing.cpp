#include <iostream>
#include <string>
using namespace std;

// Function to perform bit stuffing
string bitStuffing(const string& input) {
    string stuffed = ""; // Resultant string after bit stuffing
    int count = 0;       // Counter for consecutive 1's

    for (char bit : input) {
        stuffed += bit; // Add the current bit to the result

        if (bit == '1') {
            count++; // Increment the counter for consecutive 1's
            // Stuff a '0' after five consecutive 1's
            if (count == 5) {
                stuffed += '0'; // Stuff '0'
                count = 0;      // Reset counter
            }
        } else {
            count = 0; // Reset the counter if bit is '0'
        }
    }

    return stuffed;
}

// Function to perform bit unstuffing
string bitUnstuffing(const string& input) {
    string unstuffed = ""; // Resultant string after bit unstuffing
    int count = 0;         // Counter for consecutive 1's

    for (size_t i = 0; i < input.size(); i++) {
        unstuffed += input[i]; // Add the current bit to the result

        if (input[i] == '1') {
            count++; // Increment the counter for consecutive 1's
            // Skip the stuffed '0' after five consecutive 1's
            if (count == 5 && i + 1 < input.size() && input[i + 1] == '0') {
                i++;      // Skip the next bit (the stuffed '0')
                count = 0; // Reset the counter
            }
        } else {
            count = 0; // Reset the counter if bit is '0'
        }
    }

    return unstuffed;
}

int main() {
    string data;
    cout << "Enter the binary data to be transmitted: ";
    cin >> data;

    // Validate input (check for valid binary string)
    for (char bit : data) {
        if (bit != '0' && bit != '1') {
            cerr << "Invalid input! Please enter a binary string (only 0 and 1)." << endl;
            return 1; // Exit with an error code
        }
    }

    string stuffedData = bitStuffing(data);
    cout << "Data after bit stuffing: " << stuffedData << endl;

    string unstuffedData = bitUnstuffing(stuffedData);
    cout << "Data after bit unstuffing: " << unstuffedData << endl;

    // Verify correctness
    if (data == unstuffedData) {
        cout << "Bit unstuffing was successful!" << endl;
    } else {
        cout << "Error: Bit unstuffing failed!" << endl;
    }

    return 0;
}
