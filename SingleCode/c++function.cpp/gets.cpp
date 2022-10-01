/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-30 10:48:58
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 11:08:46
 * @FilePath: \SingleCode\c++function.cpp\gets.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
#include <cstdio>
using namespace std;
void show(int arr[],int n){
    for (int i = 0; i <= n; i++) cout << arr[i] << ' ';
    cout << endl;
}
int main(){
    char a[100];
    gets(a);
    cout << a;
    return 0;
}