#include <iostream>

using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
        int nt10 = n / 10;
        n %= 10;
        int nt5 = n / 5;
        int nt1 = n % 5;
        
        cout << "NT10=" << nt10 << endl;
        cout << "NT5=" << nt5 << endl;
        cout << "NT1=" << nt1 << endl;
    }
    
    return 0;
}