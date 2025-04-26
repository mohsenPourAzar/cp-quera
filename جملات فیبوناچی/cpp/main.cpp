#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,a=1,b=1,c;
    cin >> n;

    vector <int> l;
    l.push_back(1);
    l.push_back(1);
    while(b<n){
        c = a+b;
        a = b;
        b = c;
        if (c<=n)
            l.push_back(c);
    }
    int k = l.size()-1;
    while (n>=0 && k>=0){
        if(l[k] <= n){
            cout << k << " ";
            n = n - l[k];
        }
        k = k-1;
    }
    return 0;
}
