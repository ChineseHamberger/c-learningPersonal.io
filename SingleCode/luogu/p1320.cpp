/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-24 11:26:46
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-24 21:20:46
 * @FilePath: \SingleCode\luogu\p1320.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
//注意数字数组，字符数组的初始化，思考for（既定次数的循环，一个挨一个的循环）
// while的使用(判断条件循环，次数不定，可以跳跃)
//数字1 和 字符'1'不同
using namespace std;
void show(char arr[],int n){
    for (int i = 0; i <= n; i++) cout << arr[i] << ' '; 
    cout << endl;
}
int main(){
    char a;
    char b[40002];
    int sum = 1;
    int count=1;
    b[0] = 'x';
    while (cin >> a)
    {
        b[count] = a;
        count++;
    }
    int n = sqrt(strlen(b));
    cout << n << ' ';
    int i = 1;
    b[n*n+1] = 'x';
    //show(b,n*n);
    if (b[1]=='1') cout << 0 << ' ';
    while (i<=n*n)
    {
        if (b[i]!=b[i+1])
        {
            cout << sum << ' ';
            sum = 1;
        }
        else 
        {
            sum += 1;
        }
        i++;
    }
    return 0;
}