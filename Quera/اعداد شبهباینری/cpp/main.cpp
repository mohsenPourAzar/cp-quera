#include <iostream>
using namespace std;

bool isPowerOfTwo(int x) {
    return x > 0 && (x & (x - 1)) == 0;
}

int main() {
    int n;
    cin >> n;
    int res_sum=0;
    for (int i=1 ;i<n; i++){
        if(n%i == 0){
            res_sum+=i;
        }
    }
    if (isPowerOfTwo(res_sum)){
        cout << 1;
    }
    else{
        cout << 0;
    }
}
