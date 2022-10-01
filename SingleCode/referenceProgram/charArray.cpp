/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-23 17:13:38
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 08:37:03
 * @FilePath: \SingleCode\referenceProgram\charArray.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//只有初始化时可以整体赋值
char a[8] = "beijing";
char a[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
char a[6]={"hello"};
char a[]={"hello"};
char a[] = "Hello";
//还有一种是用八进制或十六进制代表其ASCII码指代的字符
初始化为NULL即'\0'(空字符）(空字符不是space空格字符，空字符的ASCII码是0，ASCII名称是NULL；空格字符的ASCII码是32，ASCII名称是SP）
int a[100]={0};//这里的0不是'0'字符，不要混淆

计算字符数组本身的长度,包含/0
sizeof()函数
样例

char a[100]="hello";
char b[100]={0};
char c[]="hello";
char d[]={'h','e','l','l','\0'};
char e[]={'h','e','l','l'};
cout<<sizeof(a)<<endl;
cout<<sizeof(b)<<endl;
cout<<sizeof(c)<<endl;
cout<<sizeof(d)<<endl;
cout<<sizeof(e)<<endl;
输出

10
10
6
5
4
 
计算字符串的长度
方法一
strlen函数
char a[100]="hello";
int len1=strlen(a);//strlen函数有返回值
int len2=strlen("hello");
cout<<len1<<endl;
cout<<len2<<endl;
cout<<strlen("hello"); 
输出结果为

5
5
5
 
输入
cin
说明


cin输入时遇到空格时则终止读取；
cin会过滤掉不可见字符（如空格、回车、tab等）。
例如

char a[100]
cin>>a;
输入样例

awdfef fef4
dwa54f4e64f
5rg4rg1 e5f464g
fef 5r4gf  f gr grg

cin.getline()
说明

getline()读取一行输入，遇到空格字符时不会忽略，只有遇到换行符才会返回并丢弃换行符
用法

cin.getline(char字符数组名，需要输入的最大字符长度）;
样例

int a[100];
cin.getline(a,100);//最多输入99个字符，即（0,99）；

————————————————
版权声明：本文为CSDN博主「菜的深沉」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/qq_16525829/article/details/103285309