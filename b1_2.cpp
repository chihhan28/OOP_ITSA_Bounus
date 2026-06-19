#include <iostream>

using namespace std;

int main() {
    int num;
    
    cin >> num;
    cout << num / 1000 << endl;
    cout << (num / 100) % 10 << endl;
    cout << (num / 10) % 10 << endl;
    cout << num % 10 << endl;
    
    return 0;
}