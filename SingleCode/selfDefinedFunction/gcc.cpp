#include <iostream> //cin,cout
#include <cmath>
#include <algorithm> //sort
#include <cstring>
using namespace std;

int gcc(int a, int b){
    if (a>b) {int tmp = b; b = a; a = tmp;}
    while (b%a!=0)
    {
        int tmp = a;
        a = b - b/a*a;
        b = tmp;
    }
    return a;
}

int main(){
    int a,b;
    while (cin >> a >> b){
    cout << gcc(a,b);}
    return 0;
}