#include<iostream>
using namespace std;

int getSum(int *arr , int n){
    int sum =0;
    for(int i=0 ; i<n ; i++){
        sum +=arr[i];

    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    //  to make variable size array by heap 
    int * arr  = new int[n];
    // aise possible nhi tah array bnana pr hmne bna by help of heap
    // jo n dla use array bn a kbhi dekha tha
     

    // taking input in array
    for(int i=0 ; i<n; i++){
        cin >> arr[i];

    }

    int ans =getSum(arr ,n);
    cout << "answer is" << ans << endl;
    return 0;
}
// formula btaya th ana arr[i] = *[arr+i]