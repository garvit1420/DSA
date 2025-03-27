#include<iostream>
using namespace std;

// for finding the length of cha array
int getLength(char name[]){
    int count = 0;
    for(int i=0 ; name[i]!='\0'; i++){
        count ++;
    }
    return count;
}
    int main(){
        char name[20];
        cout << "enter your name" << endl;
        cin>> name;
        cout << "your name is";
        cout << name << endl;
        cout << "your length is";
        cout << getLength(name) << endl;
        return 0 ;
    }


