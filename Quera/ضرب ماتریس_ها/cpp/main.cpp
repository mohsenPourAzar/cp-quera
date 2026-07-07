#include<iostream>
using namespace std;

void getM1(int m1[10][10], int R1 , int C1R2) {
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C1R2; j++) {
            cin >> m1[i][j];
        }
    }
}

void getM2(int m2[10][10], int C2, int C1R2) {
    for (int i = 0; i < C1R2; i++)
    {
        for (int j = 0; j < C2; j++) {
            cin >> m2[i][j];
        }
    }
}

void calM1_M2(int R1 ,int C2 ,int C1R2,int m1[10][10] ,int m2[10][10] ,int m3[10][10]) {
    int s;
    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            s = 0;
            for (int k = 0; k < C1R2; k++) {
                s = s + (m1[i][k] * m2[k][j]);
            }
            m3[i][j] = s;
        }
    }
}
int main()
{
    int m1[10][10], m2[10][10], m3[10][10];
    int R1, C1R2, C2;
    

    cin >> R1 >> C1R2 >> C2;
    
    getM1(m1,  R1,  C1R2);
    getM2(m2, C2, C1R2);
    calM1_M2( R1,  C2,  C1R2,  m1,  m2,  m3);


    for (int i = 0; i < R1; i++)
    {
        for (int j = 0; j < C2; j++) {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}