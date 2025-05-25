#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

pair<string, string> findSmallestAndLargest(int n, int s) {
    if (s == 0) {
        if (n == 1) return {"0", "0"};
        else return {"-1", "-1"};
    }
    if (s > 9 * n) return {"-1", "-1"};

    string smallest(n, '0');
    int sum = s - 1;
    for (int i = n - 1; i > 0; i--) {
        if (sum >= 9) {
            smallest[i] = '9';
            sum -= 9;
        } else {
            smallest[i] = '0' + sum;
            sum = 0;
        }
    }
    smallest[0] = '0' + (sum + 1);

    string largest(n, '0');
    sum = s;
    for (int i = 0; i < n; i++) {
        if (sum >= 9) {
            largest[i] = '9';
            sum -= 9;
        } else {
            largest[i] = '0' + sum;
            sum = 0;
        }
    }

    return {smallest, largest};
}

int main() {
    int n,s;
    cin >> n >> s;
    auto [smallest, largest] = findSmallestAndLargest(n, s);
    cout << smallest<< " " << largest;
    return 0;
}
