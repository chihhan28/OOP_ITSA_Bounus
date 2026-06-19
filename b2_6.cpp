#include <iostream>

using namespace std;

int main() {
    int n;
    
    if (cin >> n) {
        while (n--) {
            int x, y;
            cin >> x >> y;
            
            int sum = x + y;
            cout << sum * sum << endl;
        }
    }
    
    return 0;
}