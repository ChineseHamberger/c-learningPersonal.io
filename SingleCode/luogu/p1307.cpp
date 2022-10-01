/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-24 09:29:05
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-24 09:48:40
 * @FilePath: \SingleCode\luogu\p1307.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//考虑为0的情况 403020
#include <iostream> //cin,cout
#include <cmath>
#include <cstring> //memset
#include <algorithm> //sort
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[11]={0};
    int sum;
    int cnt = 0;
    bool sign = 1;
    if (n==0) {cout << 0;return 0;}
    else if (n<0) {n = -n; sign = 0;}
    for (int i = 1; i <= 10; i++)
    {
        int c = pow(10,i);
        int d = pow(10,i-1);
        arr[i] = n%c/d;
    }
    for (int i = 10;i>=1;i--)
    {
        if (arr[i]!=0)
        {
            for (int j = i;j>=1;j--){
            sum += arr[j]*pow(10,cnt);
            cnt++;
            }
            break;
        }
    }
    cout << ((sign) ? sum:-sum);
    return 0;
}