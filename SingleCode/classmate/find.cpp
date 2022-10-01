/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-21 14:03:23
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-21 14:07:00
 * @FilePath: \SingleCode\classmate\find.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//用循环结构对每个方程依次求解
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n,sum=0;//n为输入方程的总数，sum统计已经完成计算的方程数目
    cin>>n;//统计方程的总数
    for(;sum<n;sum++)
    {float a,b,c,delta;
    cin>>a>>b>>c;
    delta=b*b-4*a*c;
    double x1,x2;
    x1 = (-b + sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    if(delta!=0)
    cout<< fixed << setprecision(5) <<"x1="<<x1<<";"<<"x2="<<x2<<endl;
    if (delta==0)
    cout<<fixed << setprecision(5) <<"x1=x2="<<x1<<endl;
    }//构成整个for循环的循环体
}