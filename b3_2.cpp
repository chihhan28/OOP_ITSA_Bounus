#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char c;
    
    while (cin >> c) {
        char lower_c = tolower(c);
        if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' || lower_c == 'o' || lower_c == 'u') {
            cout << "母音" << endl;
        } else {
            cout << "子音" << endl;
        }
    }
    
    return 0;
}