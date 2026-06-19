#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    
    if (cin >> n) {
        while (n--) {
            double w;
            cin >> w;
            
            double area = round(w * w * 10.0) / 10.0;
            
            cout << fixed << setprecision(1) << area << endl;
        }
    }
    
    return 0;
}