#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
   int start = 0;
   int end = size-1;
   int mid = (start + end)/2; 
    // chalaki trick int mid = start + (end-start)/2;

 while(start <= end){
    if(arr[mid] == key) {
        return mid;
    }
        
        // go to right wla part
        if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid-1;

        }
        mid = (start+end)/2;
 }
    return -1;
    

}

int main(){
    int even[6]={4,5,6,2,8,7};
    int odd[5]={2,5,6,8,9};

    int index = binarySearch(even, 6 , 5);
    cout << "   index  "<<     index    << endl;
    return 0;
}