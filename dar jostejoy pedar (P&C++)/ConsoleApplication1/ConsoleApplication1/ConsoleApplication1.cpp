#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int SumOfPrimeDivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (isPrime(i))
                sum += i;
        }
    }
    return sum;
}
int sd(string n) {
    int b = 0;
    string v;
    for (int i = 0; n[i]; i++) {
        v = n[i];
        b = b + stoi(v);
    }
    return b;
}
int main()
{
    int t;
    cin >> t;
    for (int f = 0; f < t; f++) {
        int v;
        cin >> v;
        bool flag = false;
        for (int d = 4; d < v+1; d++) {
            if (v == SumOfPrimeDivisors(d)  + sd(to_string(d)) + d) {
                flag = true;
                cout << "Yes" << endl;
                break;
            }
            else {
                continue;
            }
        }
        if (flag == false) {
            cout << "No" << "\n";
        }
    }
}