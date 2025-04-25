#include <iostream>
#include <string>
#include <bits/stdc++.h>
#define NO_OF_CHARS 256
#include<vector>

using namespace std;
bool printDuplicates(string s){
  int count[NO_OF_CHARS] = {};
  for(int i=0; i<s.size(); i++)
    count[s[i]]++;
  for(int i=0; i<s.size(); i++){
    if(count[s[i]] > 1){
      if (count[s[i]] >= 4){
        return true;
        break;
      }
      count[s[i]] = 0;
      }
    }
    return false;
}
bool barax(string ans){
    int n,n1,reverse=0, rem;
    n = stoi(ans);
    n1 = stoi(ans);
    while(n!=0){
            rem=n%10;
            reverse=reverse*10+rem;
            n/=10;
            }
    if(n1 == reverse){
        return true;
    }else{
        return false;
        }
}
bool maxRepeating(string str1){
    string r[8];
    vector <string> z;
    for(int q=0;str1[q];q++){
        r[q] = str1[q];
    }
    for(int w=0;w<6;w++){
        if((r[w] == r[w+1]) && (r[w+1] == r[w+2])){
           z.push_back(r[w]);
           }
    }
    int len = z.size();
    if (len >=1){
        return true;
    }else{
        return false;
    }
}
int main(){
    int t;
    cin >> t;
    string s[t];
    while(t>0){
            string n;
            cin >> n;
            s[t]=n;
            if(printDuplicates(n) || barax(n) || maxRepeating(n)){
                    cout << "Ronde !" << endl;
            }else{
                cout << "Rond Nist" << endl;
            }
        t--;
    }
    return 0;
}
