#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

void display1(){
    cout << "zoj";
}

void display2(){
    cout << "fard";
}
int main(){
    int num;
    cin >> num;
    if(num%2 != 0 && isPrime(num)){
        display1();
    }else{
        display2();
    }
}