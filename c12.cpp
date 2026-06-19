#include <iostream>

using namespace std;

long long f(int n) {
    if (n == 0 || n == 1) {
        return n + 1;
    }
    return f(n - 1) + f(n / 2);
}

int main() {
    int k;
    
    while (cin >> k) {
        cout << f(k) << endl;
    }
    
    return 0;
}