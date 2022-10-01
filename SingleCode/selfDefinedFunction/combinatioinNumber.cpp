/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-27 14:32:53
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-27 14:36:52
 * @FilePath: \SingleCode\selfDefinedFunction\combinatioinNumber.cpp
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
int C(int n,int m){
    if (m<n-m) m = n-m;
    int a=1;
    int b=1;
    for (int i=m+1;i<=n;i++){a*=i;}
    for (int i=1;i<=n-m;i++){b*=i;}
    return a/b;
}

int main(){
    int n,m;
    while (cin >> n >> m){
        cout << n << ' ' << m << ' ';
        cout << C(n,m) << endl;
    }
    return 0;
}