#include<iostream>
using namespace std;

void sortArray(int *arr ,int n){
    // base casee
    if(n==0||n == 1){
        return ;
    }

// 1 case solve kr liya largest element ko end men rahk dega
      for(int i=0 ; i<n-1 ;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    sortArray(arr, n-1);
}
int main(){
    int arr[5]= {1 ,5,9,4,6};
    sortArray(arr , 5);
    for(int i=0 ; i<5 ;i++){
      cout << arr[i]<< "  ";  
    }
    return 0;

}
// do  as selection and insertion sort by recursion