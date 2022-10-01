/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-30 08:37:23
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 08:45:24
 * @FilePath: \SingleCode\referenceProgram\arrAndIndex.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
using namespace std;
//数组单元存放在连续的内存单元中
int main(){
    char *p = NULL;
    char s[]="abcdefgh";
    p = s;//数组名是一个常量指针，指向首地址；即s[0]
    while (*p!='\0')
    {
        cout << *p << endl;
        p++;//地址可以做加减运算
    }
    cout << p-s;
    return 0;
}