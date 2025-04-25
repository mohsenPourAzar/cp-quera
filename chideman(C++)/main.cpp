#include<iostream>
#include<vector>
using namespace std;
void get_num(long long int &num){cin >> num;}
void get(long long int &number){cin >> number;}
void display(long long int res){cout << res;}
int main(){
    long long int num,sum = 0,avg,res = 0;
    get_num(num);
    vector<long long int> arr;
    for(int h = 0; h< num;h++){
        long long int number;
        get(number);
        arr.push_back(number);
        sum =sum + number;
    }
    avg = sum / arr.size();
    for(auto &j : arr){
        if(j < avg){
            res = res + (avg - j);
        }
    }
    display(res);
}