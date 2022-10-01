/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-30 10:48:49
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 11:20:37
 * @FilePath: \SingleCode\c++function.cpp\getchar.cpp
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
    char a;
    while ((a = getchar())!=EOF){
        cout << (int)a << ' ';
    }
    //空格 32
    //换行 10
    return 0;
}