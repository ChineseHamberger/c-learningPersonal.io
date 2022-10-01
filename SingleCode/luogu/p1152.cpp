/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-21 14:41:57
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-21 21:25:21
 * @FilePath: \SingleCode\luogu\p1152.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

//特别注意数组长度，学习了algorithm-sort(not stable),bucket use
// sort()并非只是普通的快速排序，除了对普通的快速排序进行优化，它还结合了插入排序和堆排序。
//根据不同的数量级别以及不同情况，能自动选用合适的排序方法。当数据量较大时采用快速排序，分段递归。
//一旦分段后的数据量小于某个阀值，为避免递归调用带来过大的额外负荷，便会改用插入排序。
//而如果递归层次过深，有出现最坏情况的倾向，还会改用堆排序。

#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[1008];
    int bucket[1008];
    bool isJolly=1;
    memset(arr,0,sizeof(arr));
    memset(bucket,0,sizeof(bucket));
    for (int i = 1;i<=n;i++){
        cin >> arr[i];
        // cout << arr[i] << " "<< arr[i-1] << " ";
        bucket[i-1]=abs(arr[i]-arr[i-1]);
        // cout << bucket[i-1] << endl;
    }
    //排序左闭右开，其实bucket是一个地址
    sort(bucket+1,bucket+n);
    for (int i = 1;i<=n;i++){cout <<i << " " << arr[i]<<"  ";cout << bucket[i]<<endl;}  
    cout << *bucket; 
    for (int i = 1;i<n;i++){
        if (bucket[i]!=i) {isJolly=0;break;}   
    }
    if (isJolly){cout << "Jolly";}
    else cout << "Not jolly";
    return 0;
}