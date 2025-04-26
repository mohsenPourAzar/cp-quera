#include <iostream>
using namespace std;
int zarb(int number){
	
	for(int k= 1;k<=number;k++){
		for (int m= 1;m<=number;m++){
			cout << k*m << " ";
		}
		cout << "\n";
	}
}
int main()
{
	int number;
	cin >> number;
	zarb(number);
}