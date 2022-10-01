/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-25 20:18:20
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-25 20:26:48
 * @FilePath: \SingleCode\luogu\p1424.cpp
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
    int x,n;
    cin >> x >> n;
    int distance;
    for (int i = 1; i <= n; i++)
    {
        if ((x%7!=6)&&(x%7!=0))
        {
            distance++;
        }
        x++;
    }
    cout << distance*250;
    return 0;
}