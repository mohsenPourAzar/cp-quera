#include <iostream>
using namespace std;
int main()
{
	string n;
	cin >> n;
	for (int i=0 ; n[i]; i++){
		cout << n[i] << ": " ;
		int j = n[i] - 48;
		for(int h=0;h<j;h++){
			cout << n[i] ;
		}
		cout << endl;
	}
	
}