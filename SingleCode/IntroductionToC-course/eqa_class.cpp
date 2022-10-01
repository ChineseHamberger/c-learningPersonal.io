/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-30 08:31:24
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 08:33:15
 * @FilePath: \SingleCode\IntroductionToC-course\eqa_class.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;
int numbersum(int m) {
	int sum = 0;
	while (m > 0) {
		sum += (m % 10);
		m /= 10;
	}
	return sum;
}
int main() {
	int m, n, k;
	char c;
	cin >> m >>c>> n >>c>> k;
	//m,n,k用逗号分隔，cin不能识别！！
	for (int i = k; i < 40; i += k) {
        //first 检测是否是第一个 is first 输出j else 输出 ，j
		bool first = 1;
		for (int j = m + 1; j < n; j++) {
			if (numbersum(j)==i) {
				if (first) {
					if (i != k)
						cout << endl << j;
					else
						cout << j;
					first = 0;
				}
				else
					cout << "," << j;
			}
		}
	}
	return 0;
}
