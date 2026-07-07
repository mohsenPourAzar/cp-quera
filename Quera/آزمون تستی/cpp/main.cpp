#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string si;
    cin >> si;

    int k;
    cin >> k;

    for (int i = 0; i < k; i++) {
        int correct = 0, wrong = 0;

        for (int j = 0; j < n; j++) {
            string Pa_ans;
            cin >> Pa_ans;

            int markCount = 0;
            int markedIndex = -1;

            for (int x = 0; x < 4; x++) {
                if (Pa_ans[x] == '#') {
                    markCount++;
                    markedIndex = x;
                }
            }

            if (markCount == 0) {
                continue;
            } else if (markCount > 1) {
                wrong++;
            } else {
                int correctIndex;
                switch (si[j]) {
                    case 'A': correctIndex = 0; break;
                    case 'B': correctIndex = 1; break;
                    case 'C': correctIndex = 2; break;
                    case 'D': correctIndex = 3; break;
                }

                if (markedIndex == correctIndex) {
                    correct++;
                } else {
                    wrong++;
                }
            }
        }

        cout << 3 * correct - wrong << "\n";
    }

    return 0;
}
