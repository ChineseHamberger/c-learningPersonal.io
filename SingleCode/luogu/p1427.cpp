/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-25 20:34:08
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-25 20:38:12
 * @FilePath: \SingleCode\luogu\p1427.cpp
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
    int arr[100];
    int i = 0;
    for (;i<100;i++)
    {
        cin >> arr[i];
        if (arr[i]==0) break;
    }
    for (int j = i-1;j>=0;j--)
    {
        cout << arr[j] << ' ';
    }
    return 0;
}