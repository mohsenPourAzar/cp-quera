#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cin >> num1 >> num2;
	if (num1 == num2) {
		cout << "NO";
	}
	else if(num1 > num2) {
		num3 = num1 - num2;
		if (num1 + num2 >= num3 && num2 + num3 >= num1 && num1 + num3 >= num1) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
	else if (num2 > num1) {
		num3 = num2 - num1;
		if (num1 + num2 >= num3 && num2 + num3 >= num1 && num1 + num3 >= num1) {
			cout << "YES";
		}
		else {
			cout << "NO";
		}
	}
}