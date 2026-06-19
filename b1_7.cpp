#include <iostream>

using namespace std;

int main() {
    int type;
    cin >> type;
    
    int n = 5;

    if (type == 1) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                cout << " ";
            }
            
            if (i == 0) {
                cout << "*" << endl;
            } else if (i == n - 1) {
                for (int j = 0; j < 2 * n - 1; j++) {
                    cout << "*";
                }
                cout << endl;
            } else {
                cout << "*";
                for (int j = 0; j < 2 * i - 1; j++) {
                    cout << " ";
                }
                cout << "*" << endl;
            }
        }
        
    } else if (type == 2) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
        
    } else if (type == 3) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            for (int j = 0; j < 2 * (n - i) - 1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}