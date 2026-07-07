#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1) {
        string num = "2357";
        for (int i = 0;num[i];i++) {
            cout << num[i] << endl;
        }
    }
    else if (n == 2) {
        string num = "232931375359717379";
        for (int i = 0;num[i];i+=2) {
            cout << num[i]<<num[i+1] << endl;
        }
    }else if (n == 3) {
        string num = "233239293311313317373379593599719733739797";
        for (int i = 0;num[i];i += 3) {
            cout << num[i] << num[i + 1] << num[i + 2] << endl;
        }
    }else if (n == 4) {
        string num = "2333233923932399293931193137373337393793379759397193733173337393";
        for (int i = 0;num[i];i += 4) {
            cout << num[i] << num[i + 1] << num[i + 2] << num[i + 3] << endl;
        }
    }else if (n == 5) {
        string num = "233332333923399239932939931193313793733737339373975939359399719337333173939";
        for (int i = 0;num[i];i += 5) {
            cout << num[i] << num[i + 1] << num[i + 2] << num[i + 3] << num[i + 4] << endl;
        }
    }else if (n == 6) {
        string num = "233993239933293999373379373393593933593993719333739391739393739397739399";
        for (int i = 0;num[i];i += 6) {
            cout << num[i] << num[i + 1] << num[i + 2] << num[i + 3] << num[i + 4] << num[i + 5] << endl;
        }
    }
    else if (n == 7) {
        string num = "23399332399333293999937337995939333739391373939317393933";
        for (int i = 0;num[i];i += 7) {
            cout << num[i] << num[i + 1] << num[i + 2] << num[i + 3] << num[i + 4] << num[i + 5] << num[i + 6] << endl;
        }
    }
    else if (n == 8) {
        string num = "2339933929399999373379995939333973939133";
        for (int i = 0;num[i];i += 8) {
            cout << num[i] << num[i + 1] << num[i + 2] << num[i + 3] << num[i + 4] << num[i + 5] << num[i + 6] << num[i+7] << endl;
        }
    }
}
