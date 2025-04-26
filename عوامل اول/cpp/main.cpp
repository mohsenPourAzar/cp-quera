#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include<string>
#include <cstdlib>
#include <unordered_set>
using namespace std;


vector<int> factor(int n) {
    vector<int> result;
    if (n > 1) {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                break;
            }
        }
    }
    while (n %2 == 0){
        result.push_back(2);
        n /= 2;
    }
    for (int j = 3; j < ((int)sqrt(n)) + 1; j++) {
        while (n % j == 0) {
            result.push_back(j);
            n = n / j;
        }
    }
    if (n > 2) {
        result.push_back(n);
    }
    return result;
}
void remove(vector<int>& v)
{
    unordered_set<int> s;
    auto end = copy_if(v.begin(), v.end(), v.begin(),
        [&s](int const& i) {
            return s.insert(i).second;
        });

    v.erase(end, v.end());
}
int main()
{
    int x;
    cin >> x;
    string pfex = "", w="";
    vector<int> result_factors = factor(x);
    vector<int> R_result_f = result_factors;
    remove(R_result_f);
    vector<int> R_F;
    for (auto it = R_result_f.cbegin(); it != R_result_f.cend(); ++it) {
        R_F.push_back(* it);
    }

   for (int item = 0; item < R_F.size(); item++) {
       if (count(result_factors.begin(), result_factors.end(), R_F[item]) == 1) {
           w = "";
       }
       else {
           w = "^" + to_string(count(result_factors.begin(), result_factors.end(), R_F[item]));
       }
       pfex = pfex + to_string(R_F[item]) + w + "*";
    }
   pfex.pop_back();
   cout << pfex;
    return 0;
}