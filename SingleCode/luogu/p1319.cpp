/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-24 10:24:50
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-24 11:17:32
 * @FilePath: \SingleCode\luogu\p1319.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
using namespace std;
void show(int arr[],int n){
    for (int i = 0; i <= n; i++) cout << arr[i] << ' '; 
    cout << endl;
}
int main(){
    int n;
    cin >> n;
    int arr[40000]={0};
    bool isZero = 1;
    int sum = 0;
    int a;
    while (cin>>a){
        for (int j = sum;j<sum+a;j++){
            arr[j] = (isZero ? 0:1);
        }
        isZero = !isZero;
        sum += a;
    }
    //show (arr,n*n);
    for (int i = 0;i<n*n;i++)
    {
        if (i%n==n-1) cout << arr[i] <<endl;
        else cout << arr[i];
    }
    return 0;
}