// reference variable is - same memory  but differnt names
// to create a refernce variable int &j =i
#include<iostream>
using namespace std;

void update2(int &n){
n++;
}

void update1(int n){
    n++;
    }



int main(){
    int n =5 ;
    cout << "before " << n << endl;

    update1(n); // simple mein kuch change nhi hoga
    //update2(n); // pr refernce mein hoga isiye we need refernce
    cout << "after" << n << endl;

    return 0;
}
// pass by referne- mtlb memory toh padi h usko naya nam dedo
// pass by value - mein ap nyi memory create kr waate ho

// imp concept
/* 
int & func(int a){
int num=0 ;
int&ans=num; 
return ans;
}*/
// aisa nhi kr sakta kyuki num toh local variable h an d
// num is block ke bhar jne ke baadh mar jayega isliye yeh method use na kare


// same =function mein bhi yehi dikkat ayegi
/*
int* fun(int n){
int*ptr =&n;
return ptr;
}*/