#include <iostream>

using namespace std;
void one(){
    cout << "unique";
}
void tow(){
    cout << "infinite";
}
void three(){
    cout << "invalid";
}
int main()
{
    int a,b;
    cin >> a >> b;
    if (a>0 && b>0 || a>0 && b<0 || a<0 && b>0 || a<0 && b<0|| a>0 && b==0 || a<0 && b==0){
        one();
    }else if( a==0 && b==0){
        tow();
    }else if(a==0 && b>0 || a==0 && b<0 ){
        three();
    }
    return 0;
}
