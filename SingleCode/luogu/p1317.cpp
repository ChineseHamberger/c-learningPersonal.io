/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-24 09:51:20
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-24 10:22:38
 * @FilePath: \SingleCode\luogu\p1317.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
using namespace std;
void show(int arr[],int n){
    for (int i = 0; i <= n; i++) cout << arr[i] << " ";
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    int arr[10001]={0};
    int sum;
    for (int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    //show(arr,n);
    for (int i = 1;i<n;i++)
    {
        int j = i;
        if (arr[j]<arr[j-1]){
            while (arr[j]==arr[j+1]&&j<n){
                j++;
            }
            if (arr[j]<arr[j+1]){
                sum+=1;
                //cout << sum<<" "<<j<<endl;
            }
        }
    }
    cout << sum;
    return 0;
}