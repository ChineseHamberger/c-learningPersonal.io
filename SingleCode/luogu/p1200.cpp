/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-23 17:19:36
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-23 17:36:03
 * @FilePath: \SingleCode\luogu\p1200.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <cstring> //memset
#include <algorithm> //sort
using namespace std;
int main(){
    char star[7],group[7];
    int a=1,b=1;
    cin.getline(star,7);
    cin.getline(group,7);
    int s1= strlen(star);
    int s2 =  strlen(group);
    for (int i = 0; i< s1; i++)
    {
        int m =star[i]-'A'+1;
        a*=m;
    }
    for (int i = 0; i< s2; i++)
    {
        int n =group[i]-'A'+1;
        b*=n;
    }
   // cout <<a << " " << b << endl;
    cout << ((a%47==b%47) ? "GO":"STAY");
    return 0;
}