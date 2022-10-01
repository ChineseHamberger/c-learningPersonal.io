/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-28 21:20:27
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 11:59:27
 * @FilePath: \SingleCode\selfDefinedFunction\getEveryNum.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
using namespace std;
#include<iostream>
using namespace std;

void getEveryNum(int m){
    if (m==0) cout << 0 << endl;
    while (m>0) {
        cout << m % 10 << " ";
        m/=10;
    }
    cout << endl;
}
//可以输出负数的
void getEveryNumChar(int m){
    char n[10];
    itoa(m,n,10);
    for (int i = 0; i <= (int)strlen(n);i++){
        cout << n[i] << ' ';
    }
    cout << endl;
}

void getEveryNumNeg(int n){
    int m;
    if (n<0) m = abs(n);
    if (n==0) cout << 0 << endl;
    while (m>0) {
        cout << m % 10 << " ";
        m/=10;
    }
    if (n<0) cout << "-";
    cout << endl;
}

int numbersum(int m) {
	int sum = 0;
	while (m > 0) {
		sum += (m % 10);
		m /= 10;
	}
	return sum;
}

int main() {
	int a;
    while (cin >> a){
        getEveryNumChar(a);
        cout << numbersum(a) << endl;
    }
	return 0;
}

