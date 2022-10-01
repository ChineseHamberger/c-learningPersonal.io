/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-23 17:46:12
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-23 23:00:28
 * @FilePath: \SingleCode\luogu\p1304.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <cstring> //memset
#include <algorithm> //sort
using namespace std;

bool isPrime(int a){
    if (a<2) return 0;
    for (int i=2;i<=sqrt(a);i++){
        if (a%i==0) return false;
    }
    return true;
}

int main(){
    int N;
    cin >> N;
    for (int i = 2; i<=N; i += 2)
    {
        for (int j = 2; j <= i/2; j++)
        {
            if (isPrime(j)&&(isPrime(i-j))) 
            {
                cout << i << "=" << j << "+" << i-j << endl;break;
        }
    }
    }
    return 0;
}