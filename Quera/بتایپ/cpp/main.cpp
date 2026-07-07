#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    string p;  // using string as a stack

    for (char c : s) {
        if (c == '=') {
            if (!p.empty()) {
                p.pop_back();
            }
        } else {
            p.push_back(c);
        }
    }

    cout << p << endl;

    return 0;
}
