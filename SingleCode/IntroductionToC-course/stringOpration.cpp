#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
#include <cstdio>
using namespace std;

const int maxlen = 200;
int task;

typedef void (*strFunction)();
//取子串
char* Substr(char *a,int start,int len){
    //char ans[maxlen];
    char *ans = new char[maxlen];
    for (int i = start; i < start + len;i++){
        ans[i - start] = a[i];
    }
    ans[len] = '\0';
    return ans;
}
//字符串插入
char* Insert(char *a,char *b,int pos){
    char *ans = Substr(b, 0, pos);
}
int main()
{

    return 0;
}