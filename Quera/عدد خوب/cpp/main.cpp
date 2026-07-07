#include <iostream>
using namespace std;

int countDivisors(int x) {
    int counter = 0;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            counter++;
        }
    }
    return counter;
}

int main() {
    int k;
    cin >> k;
    int n = 1;

    while (true) {
        int good = (n * (n + 1)) / 2;
        if (countDivisors(good) >= k) {
            cout << good;
            break;
        }
        n++;
    }

    return 0;
}
