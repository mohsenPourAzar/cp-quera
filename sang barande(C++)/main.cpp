#include<iostream>
#include<cmath>
using namespace std;
void get(long long int &num){cin >> num;}
void Do(long long int &num){
    while (true){
        num = num / 2;
        if(num % 2 != 0){
            break;
        }
    }
}
void yes(){cout << "Yes";}
void no(){cout << "No";}
int main(){
    long long int num;
    get(num);
    if(num % 2 == 0){
        Do(num);
        if(num == 1){
            yes();
        }else{
            no();
        }
    }else{
        no();
    }
}