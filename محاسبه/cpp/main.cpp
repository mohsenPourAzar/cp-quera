#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int n)
{
    return *max_element(arr, arr+n);
}

int main(){
    int m=0,e=1,f,i=0;
    int maxnumber[5]={0};
    while(m<4){
            int numlist[3];
            cin >> numlist[0] >> numlist[1] >> numlist[2];
            int n = sizeof(numlist)/sizeof(numlist[0]);
            maxnumber[e] = largest(numlist, n);
            e++;
            m++;
    }
    int z = sizeof(maxnumber)/sizeof(maxnumber[0]);
    f = largest(maxnumber, z);
    while (i < z){
        if (maxnumber[i] == f) {
            cout << i;
            break;
        }
        i++;
    }
    return 0;
            }
