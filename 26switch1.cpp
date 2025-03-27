#include<iostream>
using namespace std;
int main(){
    int a, b;

    cout <<"enter the value of a"<<endl;
    cin >> a;

    cout << "enter the value of b"<< endl;
    cin >> b;

    char op; //  int use isliye nhi kyuki aapn ko a and b print kra ne h naki numbers that's why
    cout << " enter the operation you want to perform "<< endl;
    cin >> op;

    switch(op){
        case '+': cout<< (a+b) << endl;
        break;
        case '-': cout << (a-b)<< endl;
        break;
        case '*': cout << (a*b)<< endl;
        break; 

        default: cout<<" chal nikal"<< endl;

    }
    return 0 ;

}
