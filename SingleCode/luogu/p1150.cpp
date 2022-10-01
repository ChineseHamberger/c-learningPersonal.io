/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-21 13:43:57
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-21 13:58:00
 * @FilePath: \SingleCode\luogu\p1150.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;
int main(){
    int n,k;
    int cigaretteEnd;
    cin >> n >> k;
    int nowSmoke=0;
    int hadSmoke=0;
    nowSmoke = n;
    while (nowSmoke>0){
        cigaretteEnd += 1;
        nowSmoke -= 1;
        hadSmoke += 1;
        if (cigaretteEnd >= k){
            cigaretteEnd -= k;
            nowSmoke += 1;
        }
        //cout << cigaretteEnd << ' ' << nowSmoke << "  " <<hadSmoke<<endl;
    }
    cout << hadSmoke;
    return 0;
}