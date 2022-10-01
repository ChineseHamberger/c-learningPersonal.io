/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-24 21:34:25
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-24 21:58:54
 * @FilePath: \SingleCode\luogu\p1321.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
using namespace std;
void show(int arr[],int n){
    for (int i = 0; i <= n; i++) cout << arr[i] << ' ';
    cout << endl;
}
int main(){
    char ch;
    char charArr[255];
    int cnt = 0;
    int boy = 0;
    int girl = 0;
    while (cin >> ch)
    {
        charArr[cnt] = ch;
        cnt++;
    }
    int l = strlen(charArr);
    int i = 0;
    while (i<l)
    {
        char a = charArr[i];
        switch(a){
            case 'b': 
                if ((i+2<l)&&(charArr[i+1]=='o')&&(charArr[i+2]=='y'))i += 3;
                else if ((i+1<l)&&(charArr[i+1]=='o'))i+=2;
                else i++;
                boy++;
                break;
            case 'o': 
                if ((i+1<l)&&(charArr[i+1]=='y'))i+=2;
                else i++;
                boy++;
                break;
            case 'y': 
                i ++;
                boy++;
                break;
            case 'g':
                if ((i+3<l)&&(charArr[i+1]=='i')&&(charArr[i+2]=='r')&&(charArr[i+3]=='l'))i += 4;
                else if ((i+2<l)&&(charArr[i+1]=='i')&&(charArr[i+2]=='r'))i += 3;
                else if ((i+1<l)&&(charArr[i+1]=='i'))i+=2;
                else i++;
                girl++;
                break;
            case 'i':
                if ((i+2<l)&&(charArr[i+1]=='r')&&(charArr[i+2]=='l'))i += 3;
                else if ((i+1<l)&&(charArr[i+1]=='r'))i+=2;
                else i++;
                girl++;
                break;
            case 'r':
                if ((i+1<l)&&(charArr[i+1]=='l'))i+=2;
                else i++;
                girl++;
                break;
            case 'l':
                i ++;
                girl++;
                break;
            default:
                i++;
        }
    }
    cout << boy << endl;
    cout << girl;
    return 0;
}


using namespace std;//命名空间~ 
int main() {//主函数 
	int boy=0,girl=0;//boy和girl用来记下各自的个数 
	string st;//定义题目给出的字符串 
	cin>>st;//这个我们校长都能看得懂的输入~ 
	for(int i=0;i<=st.length();i++){//开始发挥计算机的强大功能！
    //st.length()为读取字符串长度的函数，c++中最好用string头文件，这里我就直接用万能头文件了~ 
		if (st[i]=='b'||st[i+1]=='o'||st[i+2]=='y')//判断连着的三个字母是否为b、o、y 
			boy++;//boy计数器加一 
		if (st[i]=='g'||st[i+1]=='i'||st[i+2]=='r'||st[i+3]=='l')//判断连着的三个字母是否为g、i、r、l 
			girl++;//girl计数器加一 
	}
	cout<<boy<<endl;//输出boy的个数  换行~ 
	cout<<girl<<endl;//输出girl的个数 
	return 0;//愉快地结束程序~~~~ 
}
