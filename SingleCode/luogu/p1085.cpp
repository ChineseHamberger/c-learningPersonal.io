/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-20 19:31:01
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-20 19:42:56
 * @FilePath: \SingleCode\luogu\p1085.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;
int main(){
    bool isHappy = 1;
    int max = 9;
    int arr[8];
    for (int i=1;i<=7;i++){
        int a,b;
        cin >> a >> b;
        arr[i] = a+b;
    }
    for (int i=1;i<=7;i++){
        if (arr[i]>=max) {isHappy = 0;max = arr[i];}
    }
    
    if (isHappy) cout << 0;
    else {
        for (int i=1;i<=7;i++){
        if (arr[i]==max) {cout << i;break;}
        }
        }
    return 0;
}