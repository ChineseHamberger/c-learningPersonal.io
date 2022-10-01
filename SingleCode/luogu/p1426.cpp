/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-25 20:28:31
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-25 20:32:55
 * @FilePath: \SingleCode\luogu\p1426.cpp
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
    double s,x;
    cin >> s >> x;
    int time = 0;
    double pos = 0;
    double tmp = 7;
    while (pos<s-x){
        time++;
        pos += tmp;
        tmp*=0.98;
    }
    pos +=  tmp;
    if (pos<=s+x)
    {
        cout << 'y';
    }
    else cout << 'n';
    return 0;
}