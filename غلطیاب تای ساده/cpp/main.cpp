#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool my_isalpha(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

bool my_isupper(char c) {
    return (c >= 'A' && c <= 'Z');
}

char my_tolower(char c) {
    if (c >= 'A' && c <= 'Z') return c + 32;
    return c;
}

bool isVowel(char c) {
    c = my_tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
    string text, line;
    while (getline(cin, line)) {
        text += line + '\n';
    }

    vector<string> typos;
    string word = "";

    for (int i = 0; i <= text.size(); i++) {
        char c = text[i];
        if ((my_isalpha(c) || c == '\'') && i != text.size()) {
            word += c;
        } else {
            if (word != "") {

                string clean = "";
                for (int j = 0; j < word.size(); j++) {
                    if (word[j] != '\'') {
                        clean += word[j];
                    }
                }

                if (clean.size() < 5) {
                    word = "";
                    continue;
                }

                bool allUpper = true;
                for (int j = 0; j < clean.size(); j++) {
                    if (!my_isupper(clean[j])) {
                        allUpper = false;
                        break;
                    }
                }
                if (allUpper) {
                    word = "";
                    continue;
                }

                string low = "";
                for (int j = 0; j < clean.size(); j++) {
                    low += my_tolower(clean[j]);
                }

                bool hasFiveConsonants = false;
                for (int j = 0; j <= low.size() - 5; j++) {
                    bool allCons = true;
                    for (int k = 0; k < 5; k++) {
                        char ch = low[j + k];
                        if (!my_isalpha(ch) || isVowel(ch)) {
                            allCons = false;
                            break;
                        }
                    }
                    if (allCons) {
                        hasFiveConsonants = true;
                        break;
                    }
                }

                if (hasFiveConsonants) {
                    typos.push_back(clean);
                }

                word = "";
            }
        }
    }

    for (int i = 0; i < typos.size(); i++) {
        if (i > 0) cout << " ";
        cout << typos[i];
    }

    return 0;
}
