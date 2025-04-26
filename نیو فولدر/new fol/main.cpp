#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main()
{
    int num;
    cin >> num;
    cin.ignore();
    string str;
    vector <string> arr_a;
    vector <string> arr;
    for(int i=0;i<num;i++){
        getline(cin,str);
        string m="";
        if(count(arr.begin(),arr.end(),str)>=1){
            m = str + " " +"("+to_string(count(arr.begin(),arr.end(),str))+")";
            arr.push_back(m);
            if (count(arr.begin(),arr.end(),m)>1){
                arr.pop_back();
                m = str + " " +"("+to_string(count(arr.begin(),arr.end(),m)+1)+")";
                arr.push_back(m);
            }
        }
        arr.push_back(str);
        vector<string> www = arr;
        sort(www.begin(), www.end());
        auto last = unique(www.begin(), www.end());
        www.erase(last, www.end());
        
        string w = "";
        for(auto &h : www){
            w +=  "'"+h+"', " ;
            }
            w.pop_back();
            w.pop_back();
        arr_a.push_back(w);
        
    }
    for(auto &x : arr_a){
        cout << x << endl;
    }
}