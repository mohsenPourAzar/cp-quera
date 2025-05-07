#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int sum_number = 0;
    for (int i=1;i<=a;i++){
        cout << i;
        sum_number+= i;
        if (i == a){
            cout << " = " <<sum_number ;
        }else{
            cout << " + ";
        }
    }
    return 0;
}
