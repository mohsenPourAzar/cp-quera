#include <iostream>
#include <cstring> 
#include <string> 
using namespace std;

int main()
{
	int number,c=0,i=0;
	string str;
	cin >> number;
	cin >> str;

	for (int j = number;str[j];j++) {
		if (str[i] != str[j]) {
			c++;
		}
		i++;
	}
	if (c == number) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}