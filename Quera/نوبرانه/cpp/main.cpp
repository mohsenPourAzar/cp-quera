#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3, a4, a5;
    int const0 = 0;

    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    if (a1 >= 80) {
        const0++;
    }
    if (a2 >= 80) {
        const0++;
    }
    if (a3 >= 80) {
        const0++;
    }
    if (a4 >= 80) {
        const0++;
    }
    if (a5 >= 80) {
        const0++;
    }

    if (const0 >= 3) {
        cout << "Mamma mia!";
    }
    else if (const0 > 0) {
        cout << "Mamma mia!!";
    }
    else
    {
        cout << "Mamma mia!!!";
    }
}