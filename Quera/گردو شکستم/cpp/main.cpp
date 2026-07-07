#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n,x,y, res;
    vector<int> nums;
    cin >> n >> x >> y;
    for (int a = 0; a <= n / x; ++a) {
        int remaining = n - a * x;
        if (remaining % y == 0) {
            int b = remaining / y;
            cout << a << " " << b << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
