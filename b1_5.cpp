#include <iostream>
#include <string>

using namespace std;

int main() {
    string num;
    
    cin >> num;
    for (int i = 0; i < 5; i++) {
        int count = num[i] - '0';
        for (int j = 0; j < count; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}