#include <iostream>
#include <string>
using namespace std;

string text;
int good = 0;
int count0 = 0;

int countFreq(string pat, string txt) {
    int m = pat.length();
    int n = txt.length();
    int count = 0;

    for (int i = 0; i <= n - m; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (txt[i + j] != pat[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            count++;
        }
    }

    return count;
}

int main() {
    getline(cin, text);

    string line;
    while (getline(cin, line)) {
        if (line[0] == 'I') {
            break;
        }

        string parts[4];
        int idx = 0;
        string temp = "";

        for (int i = 0; i < line.length(); i++) {
            if (line[i] == ' ') {
                parts[idx] = temp;
                idx++;
                temp = "";
            } else {
                temp = temp + line[i];
            }
        }

        parts[idx] = temp;
        count0++;

        if (parts[0] == "copy") {
            string result = "";
            int times = stoi(parts[2]);
            for (int i = 0; i < times; i++) {
                result = result + parts[1];
            }
            string rest = "";
            for (int i = result.length(); i < text.length(); i++) {
                rest = rest + text[i];
            }
            text = result + rest;
        }

        else if (parts[0] == "compare") {
            if (text == parts[1]) {
                good++;
            }
        }

        else if (parts[0] == "substr") {
            int found = countFreq(parts[1], text);
            int need = stoi(parts[2]);
            if (found == need) {
                good++;
            }
        }

        else if (parts[0] == "attach") {
            string full = parts[1] + parts[3];
            int found = countFreq(full, text);
            int need = stoi(parts[2]);
            if (found == need) {
                good++;
            }
        }

        else if (parts[0] == "length") {
            int len = stoi(parts[1]);
            if (text.length() == len) {
                good++;
            }
        }
    }

    if (good >= count0 / 2) {
        cout << "Eyval";
    } else {
        cout << "HeifShod";
    }

    return 0;
}
