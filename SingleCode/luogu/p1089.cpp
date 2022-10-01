/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-20 19:52:57
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-20 20:02:59
 * @FilePath: \SingleCode\luogu\p1089.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;
int main(){
    int moneyBegin=0;
    int deposit=0;
    bool isEnough=1;
    for (int i=1;i<=12;i++){
        int budget;
        cin >> budget;
        if (moneyBegin+300-budget<0) {
            cout << -i;
            isEnough = 0;
            break;}
        else if (moneyBegin+300-budget>=100) {
            deposit += (moneyBegin+300-budget)/100*100;
            moneyBegin = moneyBegin+300-budget-(moneyBegin+300-budget)/100*100;
        }
        else{
            moneyBegin = moneyBegin+300-budget;
        }
    }
    if (isEnough) cout << moneyBegin+deposit*1.2;
    return 0;
}