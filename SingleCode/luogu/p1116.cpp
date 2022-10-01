/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-20 21:49:20
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-20 21:53:57
 * @FilePath: \SingleCode\luogu\p1116.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[10002];
    int sum;
    for (int i =1;i<=n;i++){
        cin >> arr[i];
    }
    for (int i = 1; i<n;i++){
        for (int j = i+1;j<=n;j++){
            if (arr[j]<arr[i]) sum+=1;
        }
    }
    cout << sum;
    return 0;
}