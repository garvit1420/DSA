#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout << num << endl;
    //  address of operator
    cout << " address of num is "<< &num << endl;
    int *ptr = &num; // yeh double mein bhi bna sakte and char mein bhi
    cout << "Address is : "<< ptr << endl;
    cout << "value is : "<< *ptr << endl; //* dereference operator
    return 0;
    double d = 4.3;
    double *p2 = &d;

    cout << "Address is:" << p2 << endl;
    cout << "value is :" << *p2 << endl;
    cout << "size of integer is"<< sizeof(num)<< endl;
    cout << " size of pointer is"<< sizeof(ptr)<< endl;
    cout << " size of pointer is" << sizeof(p2)<< endl; // pointer ki size 8 hi ayegi kyuki  address ka bhi toh store karta h na

}
