/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-23 17:02:04
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-23 17:08:04
 * @FilePath: \SingleCode\luogu\p1179.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <cstring> //memset
#include <algorithm> //sort
using namespace std;
int main(){
    int L,R;
    cin >> L >> R;
    int sum;
    for (int a = L; a <= R;a++)
    {
        for (int i = 1;i<=6;i++)
        {
            //int 转换是必要的
            int c = pow(10,i);
            int d = pow(10,i-1);
            if (a%c/d==2) sum+=1; 
        }
    }
    cout << sum;
    return 0;
}