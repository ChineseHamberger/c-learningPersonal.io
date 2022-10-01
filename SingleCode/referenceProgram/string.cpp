/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-19 18:29:34
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-19 18:40:35
 * @FilePath: \SingleCode\referenceProgram\bin\string.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1 = "please help me";
    cout << s1.size() << endl;
    cout << s1.substr(9,4);
    return 0;
}