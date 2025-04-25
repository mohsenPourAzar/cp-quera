#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

int sd(string n) {
    int b = 0;
    string v;
    for (int i = 0; n[i]; i++) {
        v = n[i];
        b = b + stoi(v);
    }
    return b;
}
bool is_prime(int k) {
    if (k <= 1) {
        return false;
    }

    if (k % 2 == 0 || k % 3 == 0) {
        return false;
    }
    for (int j = 5; j <= (int)sqrt(k); j++) {
        if (k % j == 0 || k % (j + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int num2, num1, num3, i = 0;
    string num0;
    cin >> num0;
    num2 = sd(num0);
    num1 = stoi(num0);

    while (num2 != i) {
        num1++;
        if (is_prime(num1)) {
            i++;
        }
    }
    cout << num1;
    return 0;
}
