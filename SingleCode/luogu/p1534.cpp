/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-26 18:14:39
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-26 18:32:15
 * @FilePath: \SingleCode\luogu\p1534.cpp
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
    int n;
    cin >> n;
    int state = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int a,b;
        cin >> a >> b;
        state += a+b-8;
        sum += state;
    }
    cout << sum;
    return 0;
}