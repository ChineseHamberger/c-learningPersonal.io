/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-28 21:08:27
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-28 21:16:33
 * @FilePath: \SingleCode\IntroductionToC-course\distribution.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <cmath>
using namespace std;

//numSum函数返回各位数字相加之和
int numSum(int cnt){
    int arr[100]={};
    int m = 0;
    int sum=0;
    //arr[i]存储从个位开始数第i位数字
    while(cnt>pow(10,m)){
        m++;
    }
    for (int i = 1; i<=m; i++){
        int c = pow(10,i);
        int d = pow(10,i-1);
        arr[i] = cnt%c/d;
    }
    //求和
    for (int i = 1; i<=m; i++){
        sum += arr[i];
    }
    return sum;
}
int main() {
    //输入m,n,k，如11 35 3
	int m,n,k;
	char ch;
	cin >> m >> ch >>n >> ch>> k;
	int arr[10000]={}; //存储满足numSum整除k的数字  如 12 0 0 15 0 0 18 0 0 21 0 0 24 0 0 27 0 0 30 0 0 33 0
	int brr[10000]={}; //存储numSum是k的几倍     brr[]  1 0 0 2 0 0 3 0 0 1 0 0 2 0 0 3 0 0 1 0 0 2 0
	int crr[10000]={}; //crr[i]存储i倍的有几个数 crr[]  0 3 3 2 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
	int max=0;
	
	for (int i=0;i<n-m-1;i++)
	{
	   if (numSum(m+1+i)%k==0){
	        arr[i] = m+1+i;
	        brr[i] = numSum(m+1+i)/k;
	        if (numSum(m+1+i)>max) max=numSum(m+1+i);
	   } 
	}
	
	for (int i=1; i<=max;i++){
	    for (int j=0;j<n-m-1;j++){
	    	if (brr[j]==i) crr[i]++;
		}
	}

	for (int i=1; i<=max;i++){
		int d = 0;
	    for (int j=0;j<n-m-1;j++){
	    	if (brr[j]==i){
	    		d++;
	    		cout << arr[j];
	    		if (d<crr[i]) cout << ",";
	    		else cout << endl;
			}
		}
	}
	return 0;
}
