/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-30 10:20:02
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 10:31:57
 * @FilePath: \SingleCode\referenceProgram\setprecision.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
using namespace std;

int main(){
    float x=15641.23564;
    //cout.width(8);//右对齐，前面补空格
    cout << x;
    printf("%5d\n",100);           //默认右对齐,左边补空格
    printf("%-5d\n",1000);          //左对齐,右边补空格
    
    printf("%+d %+d\n",1000,-1000); //输出正负号
    
    printf("% d % d\n",1000,-1000); //正号用空格替代，负号输出
    
    printf("%x %#x\n",1000,1000);   //输出0x
    
    printf("%.0f %#.0f\n",1000.0,1000.0);//当小数点后没有值时依然输出小数点
    
    printf("%g %#g\n",1000.0,1000.0);   //保留小数点后后的0
    
    printf("%05d\n",1000);  //前面补0
    printf("%18f\n",x);//右对齐
    printf("%.3f\n",x);
    printf("%4.2f\n",x);
    return 0;
}