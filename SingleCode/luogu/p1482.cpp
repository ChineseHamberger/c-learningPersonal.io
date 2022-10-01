/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-26 17:50:22
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-26 18:05:18
 * @FilePath: \SingleCode\luogu\p1482.cpp
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
int gcc(int a, int b){
    if (a>b) {int tmp = b; b = a; a = tmp;}
    while (b%a!=0)
    {
        int tmp = a;
        a = b - b/a*a;
        b = tmp;
    }
    return a;
}
int main(){
    int a,b,c,d;
    char ch;
    cin >> a >> ch >> b >> c >> ch >> d;
    //cout << a << b << c << d;
    a = a*c;
    b = b*d;
    int g = gcc(a,b);
    cout << b/g << " " << a/g;
    return 0;
}