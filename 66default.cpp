#include<iostream>
using namespace std; 
void print(int arr[] ,int n , int start =0){
    for(int i=start ; i<n ; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[5]= {1,2,3,4,5};
    int size =5;

    print(arr , size);  // ap apne hisab se jis size ke baadh apko print krana ap kra sakte ho no need worry
    cout<< endl;
    print(arr , size ,2);

    return 0;
}
// yeh default argus h