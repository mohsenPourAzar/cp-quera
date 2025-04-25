#include<iostream>
#include<vector>
using namespace std;
void get(int &n,string &str){cin >> n;cin >> str;}
vector <int> arr(){
    vector <int> arr0 ={1};
    for(int i=1;i<=32;i++)
        arr0.push_back(arr0[i-1]*2);
    return arr0;
}
void display(int k){cout << k;}
int main(){
	int n,sum=0;
	string str;
    get(n,str);
    vector <int> H = arr();
    int x=H[n+1]-1,p=x;
	for(int i=0;i<str.size();i++)
    {
        int m=1;
        if(str[i]=='L')
            m=0;
        p-=H[i];
        sum+=m;
        x=p-sum;
        sum*=2;
    }
    display(x);
}