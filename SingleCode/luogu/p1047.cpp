/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-20 16:17:17
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-20 16:38:19
 * @FilePath: \SingleCode\luogu\p1047.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
using namespace std;
int main(){
    int l,m;
    cin >> l >> m;
    int tree[10000];
    int sum;
    for (int i = 0;i<=10000;i++){
        tree[i] = 1;
    }
    for (int i =0;i<m;i++){
        int a,b;
        cin>>a>>b;
        for (int j = a;j<=b;j++){
            tree[j] = 0;
        }
    }
    for (int i=0;i<=10000;i++){
        if (tree[i]==0) sum +=1;
        
    }
    cout << l+1-sum;
    return 0;
}
