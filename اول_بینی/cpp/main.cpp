#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}


int main() {
    int a, b;
    cin >> a ;
    cin >> b;

    string output = "";
    for (int i = a+1 ; i < b; i++) {
        if (isPrime(i)) {
            output += to_string(i) + ",";
        }
    }


    output.pop_back();
    cout << output;


    return 0;
}
