#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    int max_num = numbers[0];
    int i, max_index = 0;
    for (i=0 ; i < numbers.size() ; i ++){
        if (max_num < numbers[i]){
            max_num = numbers[i];
            max_index = i;
        }
    }
    cout << max_index + 1;
    return 0;
}
