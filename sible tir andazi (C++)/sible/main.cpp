#include <iostream>
using namespace std;
void get(int &num){
    cin >> num;
}
void display0(){
    cout << "out";
}
void display1(){
    cout << "white";
}
void display2(){
    cout << "black";
}
int main(){
    int num;
get(num);
if(num==0){
    display0();
}else if(num > 0 && num < 7){
    display1();
}else{
    display2();
}
return 0;
}