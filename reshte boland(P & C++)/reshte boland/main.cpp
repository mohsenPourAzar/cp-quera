#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include<unordered_map>
using namespace std;

int good = 0, count0 = 0;
string text;

void copy(string key, int c) {
    string text0 = "";
    for (int i = 0; i < c; i++) {
        text0 += key;
    }
    text = text0 + text.substr(text0.length(), -1);
}

void compare(string key) {
    if (text == key) {
        good++;
    }
}

int countFreq(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;
        if (j == M) 
        {
           res++;
        }
    }
    return res;
}

void substr(string key, int c) {
   if(countFreq(key, text) == c){
    good++;
   }
}


void attach(string key, int c, string s) {
    key += s;
    if (countFreq(key, text) == c) {
        good++;
    }
}

void length(int c) {
    if (text.length() == c) {
        good++;
    }
}

vector<string> string_split(string s, const char delimiter)
{
    size_t start=0;
    size_t end=s.find_first_of(delimiter);
    vector<string> output;
    while (end <= string::npos)
    {
	    output.emplace_back(s.substr(start, end-start));

	    if (end == string::npos)
	    	break;

    	start=end+1;
    	end = s.find_first_of(delimiter, start);
    }
    return output;
}

int main()
{
    cin >> text;
    string order;
    getline(cin, order);
    while (order[0] != 'I')
    {
        vector<string> con = string_split(order, ' ');
        count0++;
        if(con[0] == "copy"){
            copy(con[1] ,stoi(con[2]));
        }else if(con[0] == "compare"){
            compare(con[1]);
        }else if(con[0] == "substr"){
            substr(con[1],stoi(con[2]));
        }else if(con[0] == "attach"){
            attach(con[1],stoi(con[2]),con[3]);
        }else if(con[0] == "length"){
            length(stoi(con[1]));
        }
        getline(cin, order);
    }
    
   
    if (good >= ((int)count0 / 2)) {
        cout << "Eyval";
    }
    else {
        cout << "HeifShod";
    }


}