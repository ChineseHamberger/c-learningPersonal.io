/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-30 11:25:05
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 11:40:03
 * @FilePath: \SingleCode\IntroductionToC-course\functionJump.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
#include <cstdio>
using namespace std;
int n = 0;
typedef void (*funcPack)();
void func1()
{
    n /= 2;
    cout << n << ' ';
}
void func2()
{
    n = n * 3 + 1;
    cout << n << ' ';
}

funcPack p[] = {func1, func2};
int main(){
    while(cin >> n){
    while (n!=1)
        {
            if (n%2==0)
                p[0]();
            else
                p[1]();
        }
    }
        return 0;
}