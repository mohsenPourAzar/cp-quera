#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void get(string &s, int &n){
    cin >> n;
    cin >> s;
}
void DO(int n, string s, int &k_sum,int &n_sum,int &s_sum){
    string keyvoon = "331122",nezam = "123",shir = "2123";
    for (int i = 0; i < n; i++) {
        if (keyvoon[i % keyvoon.length()] == s[i]){
            k_sum++;
        }
         if (nezam[i % nezam.length()] == s[i]){
            n_sum++;
        }
         if (shir[i % shir.length()] == s[i]){
            s_sum++;
        }
    }
}
void display_1(){cout << "keyvoon" << endl;}
void display_2(){cout << "nezam" << endl;}
void display_3(){cout << "shir farhad" << endl;}
int Max(vector <int> arr){return *max_element(arr.begin(), arr.end());}
int main()
{
    int k_sum = 0,n_sum = 0,s_sum = 0;
    int n;
    string s;
    get(s,n);
    DO(n,s,k_sum,n_sum,s_sum);
    vector <int> arr= {k_sum,n_sum,s_sum};
    int max = Max(arr);
    cout << max << endl;
    if (max == k_sum){
        display_1();
    }
    if (max == n_sum){
        display_2();
    }
    if (max == s_sum){
        display_3();
    }
    return 0;
}