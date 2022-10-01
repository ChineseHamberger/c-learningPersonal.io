/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-20 16:12:04
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-20 16:16:07
 * @FilePath: \SingleCode\luogu\p1046.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;
int main(){
    int a[10] = {};
    int height;
    int ans;
    for (int i=0;i<10;i++){
        cin >> a[i];
    }
    cin >> height;
    for (int i=0;i<10;i++){
        if ((height+30)>=a[i]){
            ans+=1;
        }
    }
    cout << ans;
    return 0;
}