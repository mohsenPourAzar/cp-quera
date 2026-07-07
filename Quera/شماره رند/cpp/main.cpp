#include <iostream>
#include <string>
#include<vector>

using namespace std;

bool Duplicates4(string s){
    int l = s.size();
    char spell[l]; 
    for (int i =0 ; i < l ; i++){
        spell[i] = s[i];
    }
    int count_spell[l];
    for (char item : spell){
        int t = 0;
        for (char i : s){
            if (item == i){
                t++;
            }
        }
        count_spell[i] = t;
        t = 0;
    }
    for(int t : count_spell){
        if (t>=4){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    string s[t];
    while(t>0){
            string n;
            cin >> n;
            s[t]=n;
            if(Duplicates4(n)){
                    cout << "Ronde !" << endl;
            }else{
                cout << "Rond Nist" << endl;
            }
        t--;
    }
    return 0;
}
