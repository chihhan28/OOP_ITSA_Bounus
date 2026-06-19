#include <iostream>

using namespace std;

int main() {
    int n;
    
    if (cin >> n) {
        while (n--) {
            long long m;
            cin >> m;
            cout << m << " " << m * m << " " << m * m * m << endl;
        }
    }
    
    return 0;
}