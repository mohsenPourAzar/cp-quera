#include <iostream>
using namespace std;

double fact(int n){
    double result=1;
    for ( int i =2; i<=n ;i++)
        result*=i;
    return result;
}

double Comb(double n , double m){
    double result= fact(n)/(fact(m)* fact(n-m));
    return result;
}
double Calc(double n){
    double result=0;
    for (double i=1 ; i<=n ;i++){
        double result2=1;
        for (double j = 1; j <=i ; j++)
            result2*= Comb(i,j);
        result+=result2;
    }
    return result;
}

int main()
{
    double n;
    cin>>n;

    cout<<Calc(n);


    return 0;
}
