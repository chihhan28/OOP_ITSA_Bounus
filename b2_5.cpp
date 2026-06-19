#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    
    while (cin >> a >> b) {
        cout << a << "+" << b << "=" << a + b << endl;
        cout << a << "*" << b << "=" << a * b << endl;
        cout << a << "-" << b << "=" << a - b << endl;
        
        int r = a % b;
        if (r < 0) {
            r += abs(b);
        }
        int q = (a - r) / b;
        
        cout << a << "/" << b << "=" << q << "..." << r << endl;
    }
    
    return 0;
}