#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int k;
    cin >> k;

    string k1;
    cin >> k1;

    vector<int> S;

    for (int v = 0; v < k; v++) {
        string k2;
        cin >> k2;

        char j = k1[v];

        for (int i = 0; i < k2.size(); i++) {
            if (k2[i] == j) {
                S.push_back(i);
                break;
            }
        }
    }

    int d = 0;
    for (int t : S) {
        if (t < 5) {
            d += t;
        } else {
            d += (9 - t);
        }
    }

    cout << d << endl;

    return 0;
}
