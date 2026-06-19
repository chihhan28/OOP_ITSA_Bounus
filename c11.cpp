#include <iostream>
#include <vector>

using namespace std;

int main() {
    int row, col;
    
    while (cin >> row >> col) {
        vector<vector<int>> matrix(row, vector<int>(col));
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> matrix[i][j];
            }
        }
        
        for (int j = 0; j < col; j++) {
            for (int i = 0; i < row; i++) {
                cout << matrix[i][j];
                if (i < row - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}