#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string feshare(string n){
    vector<char> New0;
    int q;
    string shomaresh= "",str1 = "",p="",res;
    for(auto &i : n){
        if(count(New0.begin(), New0.end(), i) == false){
            New0.push_back(i);
        }
    }
    for(auto &j : New0){
        str1 += j;
        q = count(n.begin(), n.end(), j);
        if (q>=2){
            shomaresh += to_string(q);
        }
    }
    res = str1 + shomaresh;
    vector <char> sorted_res;
    for(auto &v : res){
        sorted_res.push_back(v);
    }
    sort(sorted_res.begin(), sorted_res.end());
    p ="";
    for (auto &k : sorted_res){
        p += k;
    }
    return p;
}
int main()
{
    string a,w;
    cin >> a;
    while(true){
        w = feshare(a);
        if (w == a){
            cout << w;
            break;
        }else{
            a = w;
        }
    }
    return 0;
}