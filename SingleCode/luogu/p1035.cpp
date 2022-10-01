/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-20 15:36:01
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-20 15:55:46
 * @FilePath: \SingleCode\luogu\p1035.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;
int main(){
    double Sn = 0;
    int k;
    double i = 1;
    cin >> k;
    while (Sn<=k){
        Sn += (1/i);
        i++;
    }
    cout << i-1;
    return 0;
}