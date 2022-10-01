/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-30 10:33:43
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 10:40:31
 * @FilePath: \SingleCode\c++function.cpp\itoa.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
using namespace std;
void show(char arr[],int n){
    for (int i = 0; i <= n; i++) cout << arr[i] << ' ';
    cout << endl;
}
//char* itoa(int value, char *string, int radix)
//radix进制
int main(){
    int  n =  1086;
    char buf[5];
    itoa(n,buf,10);//输出是ASCII字符，不是数字
    show(buf,4);
    return 0;
}