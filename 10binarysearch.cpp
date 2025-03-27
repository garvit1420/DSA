#include<iostream>
using namespace std;
bool binarySearch(int *arr , int s, int e , int k){
    // base case

    //element not found
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    // element found
    if(arr[mid]==k){
        return true ;
    }

    if(arr[mid]< k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s ,mid+1 ,k);
    }
}
int main(){
    int arr[]= {1,2,3,5,6};
    int size = 5;
    int key =6;
   

  cout << " present or not "<< binarySearch(arr, 0 ,4 ,key) << endl;
    return 0;
}