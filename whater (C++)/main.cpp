#include <iostream>
#include <vector>
using namespace std; 
int trap(vector<int> &a){
        int n = a.size();
        int t = 0;
        int lm = a[0], rm = a[n - 1], low = 0, high = n - 1;
        while (low <= high)
        {
            if (a[low] <= a[high])
            {
                lm = max(lm, a[low]);
                t += lm - a[low];
                low++;
            }
            else
            {
                rm = max(rm, a[high]);
                t += rm - a[high];
                high--;
            }
        }
    return t;
}

void get(int &i){cin >> i;}
void display(int k){cout << k;}
int main() 
{ 
    vector <int> arr;
    int n;
    get(n);
    for (int l = 0 ; l < n ; l++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    display(trap(arr));
    return 0; 
}