/*
 * @Author: chinesehamburger 2576226012@qq.com
 * @Date: 2022-09-30 09:14:56
 * @LastEditors: chinesehamburger 2576226012@qq.com
 * @LastEditTime: 2022-09-30 10:12:17
 * @FilePath: \SingleCode\referenceProgram\bubblesort.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
using namespace std;
//一共走n-1趟，第i趟循环n-i个指标
void show(int arr[],int n){
    for (int i = 0; i <= n; i++) cout << arr[i] << ' ';
    cout << endl;
}
int main(){
    int arr[8]={0,2,3,1,5,6,7,4};
    cout << sizeof(arr)<<endl;
    
    for (int i = 1; i <7; i++){
        for (int j = 1; j<=7-i; j++){
            if (arr[j]>arr[j+1]) {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    show(arr,7);
    return 0;
}