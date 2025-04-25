#include <iostream>
#include <math.h>
using namespace std;
bool isAval(int n){
    if (n==1)
        return false;
    for (int i=2 ; i<= sqrt(n) ;i++)
        if (n%i==0)
            return false;
    return true;
}
bool isHard(int n , int first) {
    int temp=n;
    do {
        n=temp/first;
        if (!isAval(n))
            return false;
        first/=10;

    } while (first!=0);
    return true;
}
int pow(int n){
    if (n==0)
        return 0;

    int result=1;
    for ( int i =0; i<n ;i++)
        result*=10;
    return result;
}

int main()
{
    int n;
    cin>>n;
    int first= pow(n-1);
    int end= pow(n);
    if (n==1)
        cout<<"2 "<<endl;

    for (int i=first+1; i<end ; i+=2)
        if (i%3!=0 && i%4!=0 && i%5!=0 &&i%7!=0)
        if (isHard(i,first))
            cout<<i<<" "<<endl;


    return 0;
}

