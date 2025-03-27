#include<iostream>
using namespace std;

// ab hm function se kre ge kon print likhe br br

void printArray(int arr[], int size){
    cout <<" printing the array"<< endl;
    // print the array
    for(int i=0; i<size; i++){
        cout << arr[i] << "  ";
    }
    cout << "printing done" << endl ;
}

int main(){
    int first[15] ={2,7};
    int n = 15;
    printArray(first,15);
     

     int second[12]={5,9};
     n = 12; // nhi bhi likhege toh chalega yeh 
     printArray(second , 12);

}

// same aap char ka bhi bna sakte h array , float etc 
// bss function call mein uska nam lelena
