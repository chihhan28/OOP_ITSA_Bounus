#include <iostream>

using namespace std;

int main() {
    long long n;
    
    while (cin >> n) {
        bool isPrime = true;
        
        if (n <= 1) {
            isPrime = false;
        } else if (n == 2) {
            isPrime = true;
        } else if (n % 2 == 0) {
            isPrime = false;
        } else {
            for (long long i = 3; i * i <= n; i += 2) {
                if (n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}