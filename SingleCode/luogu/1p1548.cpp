/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-26 18:32:44
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-26 18:37:26
 * @FilePath: \SingleCode\luogu\1p1548.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
using namespace std;
void show(int arr[],int n){
    for (int i = 0; i <= n; i++) cout << arr[i] << ' ';
    cout << endl;
}
int main(){
    int n,m;
    cin >> n >> m;
    int square=0,rect=0;
    for (int i = 1; i<=n; i++)
    {
        for (int j=1;j<=m;j++)
        {
            for (int k=i;k<=n;k++)
            {
                for (int l=j;l<=m;l++)
                {
                    if ((k-i)==(l-j)) square++;
                    else rect++;
                }
            }
        }
    }
    cout << square << ' ' << rect;
    return 0;
}
