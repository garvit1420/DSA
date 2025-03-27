#include<iostream>
using namespace std;

// hold 
void printArray(){

}
int main(){

    // declare 
    int number[15];
     // accessing an array

     // koi value nhi di toh isme garbage value stored hojayegi 
     cout << " value at 14 index" << number[14]<< endl;
     //number[20] toh h ni toh error dega
     cout  << " value at 20 index" << number[20] << endl;

     // initialising an array
     int second[3] = {5,7,11};

     // accesing the element
     cout<< "the value at index 2" << second[2]<< endl;

     int third[15]= {2,7,};
     int n =15;
     // loop chalaya jo 0 se 15 tak pura hi print kr dega
     for(int i=0 ; i<n ; i++ ){
        cout<< "the value at index 14   " << third[i]<< endl;
     // ab isme 


}
}