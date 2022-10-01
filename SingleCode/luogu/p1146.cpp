/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-21 13:22:25
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-21 13:38:08
 * @FilePath: \SingleCode\luogu\p1146.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n;
    int arr[102];
    memset(arr,0,sizeof(arr));
    cin >> n;
    cout << n << endl;
    for (int i = 1;i<=n;i++){
        for (int j=1;j<i;j++){
            if (arr[j]==0) arr[j]=1;
            else if (arr[j]==1) arr[j]=0;
        }
        for (int j=i+1;j<=n;j++){
            if (arr[j]==0) arr[j]=1;
            else if (arr[j]==1) arr[j]=0;
        }
        for (int k=1;k<=n;k++){
            cout << arr[k];
        }
        cout << endl;
    }
    return 0;
}