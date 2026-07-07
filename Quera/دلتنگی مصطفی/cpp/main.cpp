#include <iostream>
using namespace std;

int main() {
    int t, m;
    cin >> t;
    while (t--) {
        cin >> m;
        bool ok = false;
        for (int j = m - 100; j <= m; ++j) {
            int s = 0, x = j;
            while (x) {
                s += x % 10;
                x /= 10;
            }
            if (j + s == m) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << '\n';
    }
    return 0;
}
