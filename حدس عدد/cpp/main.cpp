#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {

    while (b != 0) {

        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int lcm(int a, int b) {

    return (a / gcd(a, b)) * b;
}

int lcm_vector(const vector<int>& divisors) {
    int result = divisors[0];

    for (int i = 1; i < divisors.size(); i++) {
        result = lcm(result, divisors[i]);
    }

    return result;
}

int main() {
    int n=1000, k;

    cin >> k;

    vector<int> divisors(k);
    for (int i = 0; i < k; i++) {
        cin >> divisors[i];
    }

    int result_lcm = lcm_vector(divisors);

    int count0 = n / result_lcm;

    cout << count0 ;

    return 0;
}
