#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<sstream>
#include<vector>
using namespace std;
void to_cha( long arr[200010],string num){
    int i = 0;
    for(auto &i : num){
        arr[i] = num[i-1]-'0';
        i++;
    }
  
}
int main(){
    long res[200010], arr[200010];
    int max,min,len;
    string num;
    cin >> num;
    len =num.length();
    cin >> min >> max;
    res[0] = 1;
    to_cha(arr,num);
    for(int i = 0;i<len; i++){
        if(arr[i+1] == 0){
            continue;
        }
        long long number = 0;
        for(int j = i+1 ; j <= len; j++){
            number = number * 10 + arr[j];
            if(number >= max){
                break;
            }
            if(number > min){
                res[j] = (res[j] +res[i])%1000000007;
            }
        }
    }
    cout << res[len];
}