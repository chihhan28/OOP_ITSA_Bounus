#include <iostream>

using namespace std;

int main() {
    int n, a1, a2, a3;
    char comma;
    
    while (cin >> n >> comma >> a1 >> comma >> a2 >> comma >> a3) {
        int cost = a1 * 15 + a2 * 20 + a3 * 30;
        int change = n - cost;
        
        if (change < 0) {
            cout << "0" << endl;
        } else {
            int coin50 = change / 50;
            change %= 50;
            int coin5 = change / 5;
            int coin1 = change % 5;
            
            cout << coin1 << "," << coin5 << "," << coin50 << endl;
        }
    }
    
    return 0;
}