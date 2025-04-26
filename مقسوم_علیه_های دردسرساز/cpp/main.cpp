#include <iostream>

using namespace std;

int main()
{
    int sum=0,count1=0,n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j == 0){
                sum += j;
                count1 +=1;
            }
        }
    }
    cout << count1<< " " <<sum;
    return 0;
}
