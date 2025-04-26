#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int isprime(int number){
    int i=2,f=0;
    while (i<number){
            if(number%i == 0){
                return false;
            }
            i++;
            f = 1;
            }
            if(f==0){
                return true;
            }
            }
int main() {
    int n,m,counter=0,sd=0,b;
    cin >> n;
    m=n;
    while(counter < 5){
        sd += (n%10);
        n = (int)(n/10);
        counter++;
    }
    b = sd;
    int number = m+1;
    int k=0;
    while(k<b){
            if(isprime(number)){
                k++;
                if(k==b){
                    cout << number;
                }
            }
            number++;
    }
     return 0;
}
