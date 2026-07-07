#include <iostream>
#include <cmath>
using namespace std;
int  Sum(int num){
    int s = 0;
    while (num > 0){
        s += num % 10;
    num /= 10;
    }
    return s;
    }

int main(){
    int n, m;
    int min = -1, max = -1;
    int flagMin = 0;
    int flagMax = 0;
    cin >> m >> n;
    for (int i = pow(10,m-1); i < pow(10, m ); i++){
            if (n == Sum(i)){
                if (flagMin == 0){
                    min = i;
                    flagMin = 1;
                    }
                max = i;
                flagMax = 1;
            }
        }
    cout << min << " " << max;
    return 0;
}
