#include <iostream>

using namespace std;

int main()
{
    int n,a,b=0,c;
    cin >> n;
    c = n;
    while(n!=0){
        a = n%10;
        b = b*10+a;
        n /= 10;
    }
    if(b == c){
        cout << "YES";
    }else{
        cout << "NO";
        }
    return 0;
}
