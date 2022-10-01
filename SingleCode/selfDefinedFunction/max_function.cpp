/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-19 15:38:25
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-23 10:03:59
 * @FilePath: \SingleCode\selfDefinedFunction\bin\max_function.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string>
using namespace std;


int bimax(int a,int b){return a>b ? a:b;}
int bimin(int a,int b){return a<b ? a:b;}
int Max(int n){
    int max = -999999;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        if (x>max) max = x;
    }
    return max;
}
int main(){
    cout << Max(5);
    return 0;
}
