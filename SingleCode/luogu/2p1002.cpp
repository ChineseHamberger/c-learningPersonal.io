/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-27 14:15:45
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-27 14:54:11
 * @FilePath: \SingleCode\luogu\2p1002.cpp
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
int path(int a,int b,int c,int d){
    int m = c-a;
    int n = d-b;
    //cout << m+n << m << ' ';
    cout << C(m+n,m)<<' ';
    return C(m+n,m);
}
int isIn(int a, int b,int n, int m){
    if ((a>=0)&&(a<=n)&&(b>=0)&&(b<=m)) return true;
    else return false;
}
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >>d;
    int sum = 0;
    sum = path(0,0,a,b);
    cout << sum << " ";
    if (isIn(c-1,d-2,a,b)) sum -= path(0,0,c-1,d-2)*path(c-1,d-2,0,0);
    if (isIn(c-2,d-1,a,b)) sum -= path(0,0,c-2,d-1)*path(c-2,d-1,0,0);
    if (isIn(c+1,d+2,a,b)) sum -= path(0,0,c+1,d+2)*path(c+1,d+2,0,0);
    if (isIn(c+2,d+1,a,b)) sum -= path(0,0,c+2,d+1)*path(c+2,d+1,0,0);
    if (isIn(c-1,d+2,a,b)) sum -= path(0,0,c-1,d+2)*path(c-1,d+2,0,0);
    if (isIn(c-2,d+1,a,b)) sum -= path(0,0,c-2,d+1)*path(c-2,d+1,0,0);
    if (isIn(c+1,d-2,a,b)) sum -= path(0,0,c+1,d-2)*path(c+1,d-2,0,0);
    if (isIn(c+2,d-1,a,b)) sum -= path(0,0,c+2,d-1)*path(c+2,d-1,0,0);
    cout << sum;
    return 0;
}