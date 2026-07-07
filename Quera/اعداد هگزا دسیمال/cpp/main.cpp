#include <iostream>

using namespace std;

int c_n(int a,int b){
    if(a>b){
        return 0;
    }
    a = 1 + c_n(a*10,b) + c_n(a*10+1,b);
    return a;
}

int main()
{
    int n;
    cin >> n;
    cout << c_n(1,n);
    return 0;
}
