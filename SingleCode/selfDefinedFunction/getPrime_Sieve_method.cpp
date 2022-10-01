/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-30 08:48:38
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 09:08:51
 * @FilePath: \SingleCode\selfDefinedFunction\getPrime_Sieve_method.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
#include <ctime>
using namespace std;
void show(int arr[],int n){
    for (int i = 0; i <= n; i++) cout << arr[i] << ' ';
    cout << endl;
}
int main(){
    double begin = clock();
    int arr[100000] = {0};
    int cnt = 2;
    int n = 10000;
    //把合数标记为1
    while (cnt<=n){
        for (int i = 2; i <= sqrt(cnt); i++){
            if (cnt%i==0) {arr[cnt]=1;break;}
        }
        cnt++;
    }
    for (int i=2;i<=n;i++){
        if (arr[i]==0) cout << i << ' ';
    }
    cout << endl;
    double end = clock();
    cout << "运行时间:" << (double)(end-begin)/CLOCKS_PER_SEC << 's';
    return 0;
}