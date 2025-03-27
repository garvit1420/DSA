#include<iostream>
using namespace std;
int main(){
    char ch ='a';
    cout << sizeof(ch) << endl; // 1 byte iska

    char *c =&ch ;
    cout << sizeof(c) << endl; // 8 byte iska 

    // hogya na 9 byte total

    return 0;
}