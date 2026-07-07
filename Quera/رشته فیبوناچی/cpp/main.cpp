#include <iostream>
#include <string>
using namespace std;

bool isFibonacci(int n) {
    if (n == 0 || n == 1) return true;

    int a = 0, b = 1;
    while (b < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    return b == n;
}

int main()
{
    int a;
    cin >> a;
    for (int i = 1; i<=a; i++){
        if (isFibonacci(i)){
            cout <<"+";
        }else{
            cout <<"-";
        }
    }
    return 0;
}
