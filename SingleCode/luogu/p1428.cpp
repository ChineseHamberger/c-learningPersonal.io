/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-25 20:39:18
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-25 20:42:43
 * @FilePath: \SingleCode\luogu\p1428.cpp
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
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    for (int i = 0;i<n;i++)
    {
        int sum = 0;
        if (i==0) cout << 0 <<' ';
        else {
            for (int j = 0;j<i;j++){
                if (arr[j]<arr[i]) sum++;
            }
            cout << sum << ' ';
        }
    }
    return 0;
}