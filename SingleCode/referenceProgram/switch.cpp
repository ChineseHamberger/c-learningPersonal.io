/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-23 10:34:31
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-23 10:34:41
 * @FilePath: \SingleCode\referenceProgram\switch.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

//switch 类型可以是byte、short、int、char、 String（javase版本需要在7以上）
#include<iostream>
using namespace std;
int main()
{
	int score = 0;
	cout << "请输入你的评价" << endl;
	cin >> score;
	switch (score)
	{
	case 10:
	case 9:
		cout << "您认为这个电影好极了！" << endl;
		break;
	case 8:
	case 7:
		cout << "您认为这个电影很不错！" << endl;
		break;
	case 6:
	case 5:
		cout << "您认为这个电影一般般！" << endl;
		break;
	default:
		cout << "狗都不看！！！" << endl;
	}
}