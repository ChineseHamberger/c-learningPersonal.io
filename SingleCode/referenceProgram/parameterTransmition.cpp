/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-23 16:29:28
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-23 16:53:24
 * @FilePath: \SingleCode\referenceProgram\parameterTransmition.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <cstring> //memset
#include <algorithm> //sort
using namespace std;
void swap1(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    cout << "*p = " << *p << " *q = " << *q << endl;
}
void swap2(int xc, int yc){
    int temp;
    temp = xc;
    xc = yc;
    yc = temp;
    cout << "xc = " << xc << " yc = " << yc << endl; 
}
void swap3(int *xd, int *yd)
{
    int *p;
    p = xd;
    xd = yd;
    yd = p;
    cout << "*xd = " << xd << " *yd = " << yd << endl;
}
int main(){
    int x,y ;
    x = 100;
    y = 200;
    //影响主函数
    cout << "x = " << x << " y = " << y << endl;
    cout << endl;
    swap1(&x,&y);
    cout << "x = " << x << " y = " << y << endl;
    cout << endl;
    //下面两个不会影响主函数的x,y
    //在函数实例化的时候就创建了两个新的值，在交换
    swap2(x,y);
    cout << "x = " << x << " y = " << y << endl;
    cout << endl;
    //只交换了指针，不涉及主函数
    swap3(&x,&y);
    cout << "x = " << x << " y = " << y << endl;
    cout << endl;
    return 0;
}