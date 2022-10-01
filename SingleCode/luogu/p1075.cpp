/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-20 17:38:12
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-20 19:24:16
 * @FilePath: \SingleCode\luogu\p1075.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//如果一个数能分解为两个质数的乘积，则它只有这一种分解
//首先要知道唯一分解定理:一个数能且只能分解为一组质数的乘积。
//可知，若输入的数满足题目条件，他就只能分解为两个质数的乘积。
//所以在比他小且大于1的自然数中，只有那两个数能整除它，之间不可能再有任何合数或质数能整除它了，
//因为最小的能整除它的合数已经是他本身了。
#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main(){
    int n;
    cin >> n;
    /*
    for (int i = (n/2+1);i>=sqrt(n);i--){
        if (n%i==0) {cout << i;
            break;}
    }*/
    //仍无法通过
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0) {cout <<n/i;break;}
    }
    return 0;
}