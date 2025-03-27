#include<iostream>
using namespace std;
int CountSetBits(int n ){
    int count = 0 ;
     while ( n>0){
        count = count +( n & 1 );// check if the last bit is 1
        n >>=1;   // right shift to check the next bit
     }
     return count;
}

int Set_bits(int a ,int b){
    int ans = CountSetBits(a) + CountSetBits(b)  ; 
    return ans ;

}
int main (){
    int a,b;
    cin >> a >> b;

    cout << " the total no. of set bits " << Set_bits(a,b)<< endl;

}