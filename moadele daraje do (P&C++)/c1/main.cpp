#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, delta, x, x1, x2;
    cin >> a;
    cin >> b;
    cin >> c;
    delta = (b*b) - (4*a*c);
    if (a==0 && b==0){
        cout << "IMPOSSIBLE";
    }else if(a==0 && c!=0 && b!=0){
    x = -c / b;
    cout << fixed << setprecision(3) << x ;
    }else{
    if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        if (x1 > x2){
            cout << fixed << setprecision(3) << x2 << "\n";
            cout << fixed << setprecision(3) << x1 ;
        }else{
            cout << fixed << setprecision(3) << x1 << "\n";
            cout << fixed << setprecision(3) << x2 ;
        }
    }else if(delta == 0){
    x = (-b + sqrt(delta)) / (2 * a);
    cout << fixed << setprecision(3) << x ;
    }else{
        cout << "IMPOSSIBLE";
    }
    }
    return 0;
}
