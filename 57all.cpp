#include<iostream>
using namespace std;

    int getSum( int arr[]  , int n){ // or int arr[] ki jagah *arr
        cout<< endl << "size :" << sizeof(arr) << endl;

        int sum = 0;
        for(int i=0 ; i<n ;i++){
            sum +=arr[i];
    
        }
        return sum;
}
int main (){
    int arr[5]={1,2,3,4,5};
    cout << "Sum is" << getSum(arr , 5) << endl;
    return 0;
}
// jb ap kisi function ke andhar array pass karte h toh array pass nhi hota h array passs hota h 
// so 5*4 =20 nhi ata 
// simple pointer hi pass hota h