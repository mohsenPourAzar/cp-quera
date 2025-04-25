#include <iostream>
#include <vector>
using namespace std;

void get0(int &num1){
    cin >> num1;
}

void get1(int &num2){
    cin >> num2;
}

vector <int> getarr(int num){
    vector <int> li;
    for(int i=1; i<= 2*num; i++){
        li.push_back((i+1)/2);
    }
    return li;
}
void dispaly (vector <int> arr){
    cout << "winner:" << arr[0] << endl;
}

void display1 (int c, vector <int> arr){
cout << arr[c] << " ";
}
void dispaly2(vector <int> arr,int r){
cout << arr[r] << " ";
}
int main()
{
    int num, knum,r = 0, c;
    get0(num);
    get1(knum);
    vector<int> arr = getarr(num);

    while((int)arr.size() > 1)
    {
        dispaly2(arr,r);
        for(int k=1; k<knum; k++)
        {
            c = (r+k)%(int)arr.size();
            display1(c,arr);
        }
        r = c;
        cout << endl;
        arr.erase(arr.begin() + r);
        if(r == arr.size()){ 
            r = 0, c = 0;
            }
        if((int)arr.size() == 2 && arr[0] == arr[1]){
            break;
            }
    }
    dispaly(arr);
    
    return 0;
}