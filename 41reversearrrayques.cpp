#include<iostream>
using namespace std;

void reverse(int arr[] , int n ){
    int start =0;
    int end = n-1;

    while(start <= end){ // whie isliye kyuki  hme nhi pta kitni br loop chalna h 
        swap(arr[start], arr[end]);
        start ++ ;
         end--;
         

    }

}

void printArray(int arr[] , int size){
    for(int i=0 ; i<size ; i++){
        cout << arr[i] << "  ";

    }
    cout << endl;
}


int main(){
    int arr1[4]= {1,2,3,4,};
    int arr2[5]= {5,6,7,8,9,};

    reverse(arr1, 4);
    reverse(arr2,5);


    printArray(arr1 , 4);
    printArray(arr2 , 5);

}