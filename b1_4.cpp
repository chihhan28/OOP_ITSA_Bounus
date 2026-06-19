#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> dict = {
        {"dog", "狗"}, {"狗", "dog"},
        {"cat", "貓"}, {"貓", "cat"},
        {"duck", "鴨"}, {"鴨", "duck"},
        {"cow", "牛"}, {"牛", "cow"},
        {"fox", "狐"}, {"狐", "fox"}
    };

    string input;
    cin >> input;
    cout << dict[input] << endl;

    return 0;
}