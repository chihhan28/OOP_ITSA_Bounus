#include <iostream>

using namespace std;

int main() {
    int n;
    
    if (cin >> n) {
        while (n--) {
            int a, b;
            cin >> a >> b;
            cout << a + b << endl;
        }
    }
    
    return 0;
}