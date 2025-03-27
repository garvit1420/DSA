#include<iostream>
#include <math.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    int i = 0;
    
    int answer = 0;
    int r=1+(-n);
    while(r!=0){
        int bit = n&1;
        r= r>>1;
        answer = (bit*pow(10,i)) +answer;
          i++;
    }
  
    cout<< answer;

}
// bahut confuse hu  