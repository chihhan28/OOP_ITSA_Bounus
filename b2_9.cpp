#include <iostream>

using namespace std;

int main() {
    int n;
    
    if (cin >> n) {
        while (n--) {
            int i;
            cin >> i;
            
            if (i > 31) {
                cout << "Value of more than 31" << endl;
            } else {
                long long result = 1LL << i;
                cout << result << endl;
            }
        }
    }
    
    return 0;
}