#include <iostream>
#include <cmath>
using namespace std;
int sigma(int n,int m){
    int sum = 0;
    for(int i=-10;i<=m;i++){
        for(int j=1;j<=n;j++){
            sum += (pow((i+j),3) / pow(j,2));
        }
    }
    return sum;
}
int main(){
    int n,m;
    cin >> n;
    cin >> m;
    cout << sigma(n,m);
    return 0;
}
