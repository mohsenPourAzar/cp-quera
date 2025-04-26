#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i,j,n, middle, spaceCount, starCount;
    cin >> n;
    middle = (n - 1) / 2;
    for ( i = 0; i < n; i++){
        spaceCount = abs(middle - i);
        starCount = n - 2 * abs(middle - i);
        // print a row of the first diamonds
        // spaces at the beginning
        for ( j = 0; j < spaceCount; j++){
                cout << " ";
        }
        // the stars itself
        for (j = 0; j < starCount; j++){
                cout << "*";
        }
        // finish the rectangle of the first diamond
        for (j = 0; j < spaceCount; j++){
                cout << " ";
        }
        // print a row of the second diamond
        // spaces at the beginning
        for (j = 0; j < spaceCount; j++){
                cout << " ";
        }
        // the stars itself
        for (j = 0; j < starCount; j++){
                cout << "*";
        }
        cout << endl;
        }
        }
