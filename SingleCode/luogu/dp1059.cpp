/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-20 16:38:35
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-20 17:34:57
 * @FilePath: \SingleCode\luogu\p1059.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <cstring>
using namespace std;
//桶排序 小范围整数排序 b[i]=1有数 else无数
//if (b[i]) cout << i即可排序
int main(){
    int n;
    cin >> n;
    int arr[1001];
    memset(arr,0,sizeof(arr));
    int sum;
    for (int i=0;i<n;i++){
        int id;
        cin >> id;
        arr[id] = 1;
    }
    for (int i=0;i<=1000;i++){
        if (arr[i]){
            sum+=1;
        }
    }
    cout << sum << endl;
    for (int i=0;i<=1000;i++){
        if (arr[i]){
            cout << i << " ";
        }
    }
}