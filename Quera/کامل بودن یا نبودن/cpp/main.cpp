#include <iostream>

using namespace std;

int main()
{
    int number,result = 0;
    cin >> number;
    for(int i=1;i < number;i++){
        if (number % i == 0){
            result += i;
        }
    }
    if(result == number){
            cout << "YES";
    }else{
    cout << "NO";
    }
    return 0;
}
