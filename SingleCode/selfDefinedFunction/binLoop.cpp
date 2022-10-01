/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-23 16:14:42
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-23 16:26:31
 * @FilePath: \SingleCode\selfDefinedFunction\binLoop.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <cstring> //memset
#include <algorithm> //sort
using namespace std;
int main(){
    //用二进制的01代表循环有无
    //00ABCDEF--00111110
    int A,B,C,D,E,F;
    for (int n=0;n<=63;n++){
        F = n & 1; //1
        E = (n & 2) >> 1; //10  ->移到末位
        D = (n & 4) >> 2; //100
        C = (n & 8) >> 3; //1000
        B = (n & 16) >> 4;
        A = (n & 32) >> 5;
        cout << A << B << C << D << E << F << endl;
    }
    return 0;
}