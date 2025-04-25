#include <iostream>

using namespace std;

int main(){
    int k,i=0,a=1,t=0;
    cin >> k;
    while (true){
        i += a;
        for(int b=1;b<=i;b++){
            if(i%b == 0){
                t += 1;
            }
        }
        if (t >= k){
            cout << i;
            break;
        }else{
            t =0;
        }
        a += 1;
    }
    return 0;
}
