/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-21 21:30:13
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-22 00:05:34
 * @FilePath: \SingleCode\luogu\p1161.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <cstring> //memset
#include <algorithm> //sort
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[200002];
    memset(arr,0,sizeof(arr));
    for (int i=0;i<n;i++){
        double a,t;
        cin >> a >> t;
        for (int j = 1;j<=t;j++){
            
            int k = floor(a*j);
            arr[k] += 1;
        }
    }
    for (int i=1;i<=200001;i++){
        if (arr[i]%2==1) {cout << i; return 0;}
    }
}