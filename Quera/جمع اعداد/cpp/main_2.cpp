#include <iostream>
using namespace std;


string add(string a, string b) {
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;
    string result = "";

    while (i >= 0 || j >= 0 || carry > 0) {
        int x = 0;
        if (i >= 0) {
            x = a[i] - '0';
        }

        int y = 0;
        if (j >= 0) {
            y = b[j] - '0';
        }

        int sum = x + y + carry;
        result = char(sum % 10 + '0') + result;
        carry = sum / 10;

        i--;
        j--;
    }

    return result;
}


int main() {
    int n;
    cin >> n;

    string total = "0";
    while (n--) {
        string num;
        cin >> num;
        total = add(total, num);
    }

    cout << total << endl;
    return 0;
}
