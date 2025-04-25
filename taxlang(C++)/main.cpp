#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
void T(string &res){res += "T";}
void A(string &res){res += "A";}
void X(string &res){res += "X";}
void N(string &res){res += "N";}
void M(string &res){res += "M";}
int main(){
    string ma,mb,mc,str,res="";
    vector <string> dl;
    for(int k=0 ; k < 3 ; k++){
        cin >> str;
        dl.push_back(str);
    }
    ma = dl[0];
    mb = dl[1];
    mc = dl[2];

    for(int i = 0 ; i < str.length() ; i+= 5){
        if(ma.substr(i,5) == "*****" && mb.substr(i,5) == "oo*oo" && mc.substr(i,5) == "oo*oo"){
            T(res);
        }
        if(ma.substr(i,5) == "oo*oo" && mb.substr(i,5) == "o***o" && mc.substr(i,5) == "*ooo*"){
            A(res);
        }
        if(ma.substr(i,5) == "*ooo*" && mb.substr(i,5) == "oo*oo" && mc.substr(i,5) == "*ooo*"){
            X(res);
        } 
        if(ma.substr(i,5) == "**o**" && mb.substr(i,5) == "*o*o*" && mc.substr(i,5) == "*ooo*"){
            M(res);
        }
        if(ma.substr(i,5) == "*ooo*" && mb.substr(i,5) == "*o*o*" && mc.substr(i,5) == "*ooo*"){
            N(res);
        }
    }
    cout << res;
}