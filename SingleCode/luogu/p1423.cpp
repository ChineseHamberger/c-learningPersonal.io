/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-25 20:03:12
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-25 20:07:08
 * @FilePath: \SingleCode\luogu\p1423.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
using namespace std;
void show(int arr[],int n){
    for (int i = 0; i <= n; i++) cout << arr[i] << ' ';
    cout << endl;
}
int main(){
    double x;
    cin >> x;
    double tmp = 2;
    double sum = 0;
    int cnt = 0;
    do
    { 
        sum += tmp;
        tmp *= 0.98;
        cnt++;
    }
    while (sum<x);
    cout << cnt;
    return 0;
}