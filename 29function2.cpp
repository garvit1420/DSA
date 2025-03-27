#include<iostream>
using namespace std;
// 0 for even 
// 1 for odd
 bool isOdd(int a){
    //EVEN
    if(a&1){
        return 0 ;
    }
    else { //odd
        return 1;
    }
          // a&1 ==1 toh odd hoga
          // a&0 ==0 toh even hoga
 }
    int main (){
    int num ;
    cin >>num;
   
    if(isOdd(num)){
        cout << "no. is even"<< endl;

    }
    else{
        cout << " no. is odd"<< endl;
    }
    return 0 ;
 }