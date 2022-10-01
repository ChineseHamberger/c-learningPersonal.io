/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-30 08:25:20
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 08:30:33
 * @FilePath: \SingleCode\IntroductionToC-course\josephRing_Num7Problem.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <cmath>
using namespace std;
bool check(int);
int main() {
	int arr[101];   //0-n-1位存储i 如n = 5;arr[] 0 1 2 3 4 5 6 ..
	int n;                            //存储编号 1 2 3 4 5 0 0 ..
	cin >> n;
	for (int i = 1;i<=n;i++)arr[i-1]=i;
	int tag = 0;     //当前标签指向
	int cnt = 0;     //计数变量
	int sum = 0;     //已经出列的人数
	while (sum<n){
	    cnt++;
	    //cout << "t" << tag <<" c"<< cnt <<endl;
	    if (check(cnt)){
	        cout << arr[tag] << endl;
	        sum++;
	        arr[tag]=0;//出列后置为0
			}
        //设置tag的循环规则
        for (int i=1;i<=n;i++){
            if (arr[(tag+i)%n]!=0) {tag=(tag+i)%n;break;}
	    	}
		}	
	return 0;
}
bool check(int cnt){
    if (cnt%7==0) return true;
    int arr[100]={};
    int m = 0;
    while(cnt>pow(10,m)){
        m++;
    }
    for (int i = 1; i<=m; i++){
        int c = pow(10,i);
        int d = pow(10,i-1);
        arr[i] = cnt%c/d;
    }
    for (int i = 1; i<=m; i++){
        if (arr[i]==7) return true;
    }
    return false;
}