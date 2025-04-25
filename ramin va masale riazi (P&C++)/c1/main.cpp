#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,v=0;
    int x[n];
    cin >> n;

    while(n>0){
            int r1,r2,count0;
            cin >> r1 >> r2;
            count0 = floor(sqrt(r2)) - floor(sqrt(r1-1));
            x[v] = count0;
            v++;
            n--;
            }
    for(int i=0;i<sizeof(x);i++){
        cout << x[i] << endl;
    }
    return 0;
}
