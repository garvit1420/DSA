#include<iostream>
using namespace std; 
bool LinearSearch(int arr[] ,int size , int key){
    // base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart= LinearSearch(arr+1 ,size-1,key);
        return remainingPart;
    }

}

int main(){
    int arr[]= {3,5,7,8,9};
    int size =5;
    int key = 2;
    bool ans = LinearSearch(arr, size ,key);
    if(ans){
        cout<<" present"<< endl;
    }
    else{
        cout<<" not present"<< endl;
    }

    return 0;

}