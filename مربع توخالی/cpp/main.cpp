#include <iostream>

using namespace std;

int bbb(int a,int b){
    for(int i=1;i<=a;i++){

    }
}

int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    if (a <=b){
            cout << "Wrong order!";
    }else{
        if(((a-b)%2) != 0){
            cout << "Wrong difference!";
        }else{
            bbb(a,b);
        }
    }
    return 0;
}
