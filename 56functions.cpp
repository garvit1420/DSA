#include<iostream>
using namespace std;


    void print(int *p){
        cout << *p << endl; // agr sirf p leta toh address print ho jta 
    }

    void update(int *p){
        p = p+1;
        //cout << "inside"<< p << endl;
    }
    int main(){
        // dekho p ki value void update wale mein update hui h 
        //naki int main so int main mein value nhi badlegi
        int value =5;
        int *p = &value;

        //print(p);
        cout << "before" << p << endl;
        update(p);
        cout<< "after" << p << endl;
        return 0;
    } 
    // in case of *p  value change hogi explain notebook