#include<iostream>
using namespace std;

void sayDigit(int n , string arr[]){
    //base case
    if(n==0){
        return ;
    }
          // prcessing
    int digit =n%10;
    n=n/10;
    //cout<< arr[digit] << "  ";  agr yaah kra te toh reverse print hota
    //recursive call
    sayDigit(n,arr); // ek case mein kr deta hu baki tu ke le recurrsion
    cout<< arr[digit] << "  ";
}
    int main(){
    string arr[10]={"zero", "one" ,"two", "three" ,"four" ,"five","six","seven","eight","nine"};

    int n;
    cin >> n;

    sayDigit(n , arr);

}