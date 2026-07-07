#include <iostream>

using namespace std;

int main()
{
    int n,adad=1,i=0,j=0;
    cin >>n;
    while (i<n){
        while(j<i){
            adad *= 2;
            j++;
        }
        if(n<adad){
            cout << adad;
            break;
        }
        i++;
    }
    return 0;
}
