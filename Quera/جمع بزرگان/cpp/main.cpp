#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string s1, s3;
    char op;
    cin >> s1;
    cin >> op;
    cin >> s3;

    int a = s1.length() - 1;
    int b = s3.length() - 1;

    if (op == '*') {

        cout << '1';
        for(int i=0;i<a+b;i++){
            cout << '0';
        }
    } else {
        if (a == b) {
            cout << '2';
            for(int i=0;i<a;i++){
                cout << '0';
            }
        } else {

            if (a > b) swap(a, b);
            cout << '1' ;
            for(int i = 0;i<b - a - 1;i++){
                cout << '0';
            }
            cout << '1' ;
            for (int i=0; i<a;i++){
                cout <<'0';
            }
        }
    }

    return 0;
}
