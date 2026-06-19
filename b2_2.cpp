#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t, b, h;
    
    while (cin >> t >> b >> h) {
        double area = (t + b) * h / 2.0;
        cout << "Trapezoid area:" << fixed << setprecision(1) << area << endl;
    }
    
    return 0;
}