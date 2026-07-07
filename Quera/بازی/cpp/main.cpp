#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num, n;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    vector<int> result;
    bool amirTurn = true;

    while (!numbers.empty()) {
        int idx = 0;

        for (int i = 1; i < numbers.size(); i++) {
            if ((amirTurn && numbers[i] > numbers[idx]) || (!amirTurn && numbers[i] < numbers[idx])) {
                idx = i;
            }
        }

        result.push_back(numbers[idx]);
        numbers.erase(numbers.begin() + idx);
        amirTurn = !amirTurn;
    }

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
