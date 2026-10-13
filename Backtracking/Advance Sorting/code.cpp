#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    
    // Input two strings
    getline(cin, str1);
    getline(cin, str2);

    // Reverse the first string
    string rev = str1;
    reverse(rev.begin(), rev.end());
    cout << rev << endl;

    // Compare and print result
    if (str1 == str2) {
        cout << str1 << " and " << str2 << " are same" << endl;
    } else {
        cout << str1 << " and " << str2 << " are not same" << endl;
    }

    return 0;
}
