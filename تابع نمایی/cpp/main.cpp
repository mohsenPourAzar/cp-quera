#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double exp(double n, double x){
    double s = 1;
    for (double i = n - 1; i > 0; --i )
        s = 1 + x * s / i;
    return s;
}

void get(int &n, float &x){
    cin >> x;
    cin >> n;
}
void printN(double b){

    cout << fixed << setprecision(3) << b;
}
int main()
{
    int n;
    float x;
    get( n,  x);
    printN(exp(n, x));
    return 0;
}
