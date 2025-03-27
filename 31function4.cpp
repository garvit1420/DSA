#include<iostream>
using namespace std;
// void means yeh function return print nhi karega

void printCounting(int n){
   // function body
    
    for(int i=1; i<=n; i++ ){
        cout << i;
   
    }

}


int main(){
    int n;
    cin>>n;
    // function call

     printCounting(n);
    return 0; 
}