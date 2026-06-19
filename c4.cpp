#include <iostream>

using namespace std;

int main() {
    int start_h, start_m, end_h, end_m;
    
    while (cin >> start_h >> start_m >> end_h >> end_m) {
        int total_start_mins = start_h * 60 + start_m;
        int total_end_mins = end_h * 60 + end_m;
        int diff_mins = total_end_mins - total_start_mins;
        
        int half_hours = diff_mins / 30;
        int fee = 0;
        
        if (half_hours <= 4) {
            fee = half_hours * 30;
        } else if (half_hours <= 8) {
            fee = 4 * 30 + (half_hours - 4) * 40;
        } else {
            fee = 4 * 30 + 4 * 40 + (half_hours - 8) * 60;
        }
        
        cout << fee << endl;
    }
    
    return 0;
}