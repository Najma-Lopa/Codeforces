#include <bits/stdc++.h>
using namespace std;

string rmv( string code) {
    string result;
    bool inBlock = false;
    bool inLine = false;
    int n = code.size();
    for (int i = 0; i < n; i++) {
        if (!inBlock && !inLine && i + 1 < n && code[i] == '/' && code[i + 1] == '*') {
            inBlock = true;
            i++;
        } else if (!inBlock && !inLine && i + 1 < n && code[i] == '/' && code[i + 1] == '/') {
            inLine = true;
            i++;
        } else if (inBlock && i + 1 < n && code[i] == '*' && code[i + 1] == '/') {
            inBlock = false;
            i++;
        } else if (inLine && code[i] == '\n') {
            inLine = false;
        } else if (!inBlock && !inLine) {
            result += code[i];
        }
    }
    
    stringstream ss(result);
    string line, cleanedCode;
    while (getline(ss, line)) {
        if (!line.empty() && line.find_first_not_of(" ") != string::npos) {
            cleanedCode += line + "\n";
        }
    }
    return cleanedCode;
}

int main() {
    string code, line, cleanCode;
    while (getline(cin, line)) {
        code += line + "\n";
    }
    
    cleanCode = rmv(code);
    cout << cleanCode;
    return 0;
}
