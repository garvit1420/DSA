#include<iostream>
using namespace std; 

inline int getMax(int& a, int&b){
    return (a>b) ? a:b; // means ja jha ans = getmax(a,b) h waah yeh automatic uth ke ajayegi
    // same inline bhi compile hone se phle hi kr deha   

}
int main(){
    int a=1, b=2;
    int ans =0;

    ans =getMax(a,b);
    cout << ans << endl;
     a =a+3;
     b = b+1;

     ans =getMax(a,b);
     cout << ans << endl;

     return 0 ;
}