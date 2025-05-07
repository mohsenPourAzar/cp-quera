#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int q;
    cin >> q;

    for(int i=0;i<q;i++){
        int l,r;
        cin >> l >> r;
        int t = 0, num =1, res=0;
        while(res <= r){
            res = num * num;

            if (l <= res && res <= r){
                t++;
            }
            num++;
        }
        cout << t << endl;
    }

    return 0;
}
