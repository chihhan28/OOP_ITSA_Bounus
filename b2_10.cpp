#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int miles;
    
    while (cin >> miles) {
        double km = miles * 1.6;
        cout << "km=" << fixed << setprecision(1) << km << endl;
    }
    
    return 0;
}