/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-23 09:45:37
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-23 22:52:26
 * @FilePath: \SingleCode\selfDefinedFunction\isPrime.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <cstring> //memset
#include <algorithm> //sort
using namespace std;

bool isPrime(int);

int main(){
    int a;
    cin >> a;
    cout << isPrime(a);
    return 0;
}

bool isPrime(int a){
    if (a<2) return 0;
    for (int i=2;i<=sqrt(a);i++){
        if (a%i==0) return false;
    }
    return true;
}