#include <iostream>
#include <string>
#include <sstream>
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
int main()
{

    string number;
    int num;
    cin >> number;
    while (number.length() > 1)
    {
        number = to_string(sd(number));
    }

    cout << number;
    return 0;
}