#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int n;
    
    while (cin >> n) {
        cout << bitset<8>(n) << endl;
    }
    
    return 0;
}