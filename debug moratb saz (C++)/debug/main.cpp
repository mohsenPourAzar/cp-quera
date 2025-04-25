#include <iostream>

using namespace std;

void get(int & num){
    cin >> num;
}
void display(int i){
cout << i << " ";
}
void v(int n){
    for (int i = n; i >= 1; i--){
        display(i);
    }
}

int main()
{
    int n;
    get(n);
    v(n);
    return 0;
}