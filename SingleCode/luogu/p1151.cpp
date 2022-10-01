/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-21 14:08:31
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-21 14:29:35
 * @FilePath: \SingleCode\luogu\p1151.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int k;
    cin >> k;
    bool isSolvable = 0;
    for (int n=10000;n<=30000;n++){
        int arr[6];
        for (int i = 1;i <= 5; i++){
            int x = pow(10,6-i);
            int y = pow(10,5-i);
            arr[i] = n % (x)/(y);
        }
        //for (int i = 1;i <= 5; i++){cout << arr[i];}
        int a,b,c;
        a = arr[1]*100+arr[2]*10+arr[3];
        b = arr[2]*100+arr[3]*10+arr[4];
        c = arr[3]*100+arr[4]*10+arr[5];
        if ((a%k==0)&&(b%k==0)&&(c%k==0)) {
            isSolvable = 1;
            for (int i = 1;i <= 5; i++){cout << arr[i];}
            cout << endl;
        }
    }
    if (isSolvable==0) cout << "No";
    return 0;
}