/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-24 22:02:03
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-24 22:09:46
 * @FilePath: \SingleCode\luogu\p1420.cpp
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
    int arr[10000];
    int max;
    for (int i =0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k = 0;
    while (k<n)
    {
        int len = 1;
        int j = k ;
        while(arr[j]+1==arr[j+1])
        {
            j++;
            len++;
        }
        if (len>max) max = len;
        k++;
    }
    cout << max;
    
    return 0;
}