/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-26 18:49:35
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-26 19:15:57
 * @FilePath: \SingleCode\luogu\p1554.cpp
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
    int a,b;
    cin >> a >> b;
    int arr[10]={0};
    for (int i = a;i<=b;i++)
    {
        int k;
        for (k=1;k<=9;k++){
            if (i<pow(10,k)) break;
        }
        for (int j = 1; j<=k;j++)
        {
            int c = pow(10,j);
            int d = pow(10,j-1);
            //cout << i%c/d << endl;
            arr[i%c/d]+=1;
        }
    }
    for (int i = 0; i<=9;i++) cout << arr[i] << ' ';
    return 0;
}