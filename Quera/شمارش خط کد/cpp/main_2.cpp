#include<iostream>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
const ll N = 1e5*2 + 10;
ll dp[N], a[N];
void code(){

    ll n, mn, mx;
    string s; 
	cin>> s;
	n = s.length();
    cin>> mn>> mx;
  
    dp[0] = 1;
    for(int i = 1; i <= n; i++)
		a[i] = s[i-1]-'0';

    for(int i = 0; i < n; i++){
        if(a[i+1] == 0) 
			continue;

        ll num = 0;
        for(int j = i+1; j <= n; j++){
            num = num * 10 + a[j]; 
            if(num >= mx) 
				break;
            if(num > mn){
				dp[j] = (dp[j] + dp[i])%mod; 
			}
        }
    }
    cout<< dp[n] ;
}
int main(){
	code();
}