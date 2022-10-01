/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-25 20:09:15
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-25 20:15:47
 * @FilePath: \SingleCode\luogu\p1425.cpp
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
    int a,b,c,d;
    cin >> a >> b >> c>> d;
    int e;
    e = 60*(c - a);
    int f;
    f = e + d - b;
    cout << f/60 << ' ';
    cout << f - f/60*60;
    return 0;
}