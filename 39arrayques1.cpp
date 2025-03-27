#include<iostream>
using namespace std;
int getMax(int num[], int n){
    int max = INT_MIN;
    for(int i=0; i<n ; i++){
        if(num[i]> max){ // if(num[i]> max){
                         //  max= num[i];
               // dono line ki jagah maxi = max(maxi, num[i]);          
        max= num[i];
        }
    }
    // returning max value 
    return max;
}

int getMin(int num[], int n){
    int min = INT_MAX;
    for(int i=0; i<n ; i++){
        if(num[i]< min){
    
        min= num[i];
        }
    }
    // returning min value 
    return min;
}
    
    


int main(){
    int size;
    cin>> size; // yeh toh size ke liye hogya

    int num[100];// good; // num[size] not good practise

    // taking input in array
    for(int i= 0 ; i < size; i++){
        cin >>num[i]; // yeh values store kra ne ke liye 

    }
    cout << "maximum no. is "<< getMax(num, size)<<  endl;
    cout << "minimum no. is "<< getMin(num, size)<<  endl;

}