#include<iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    // craeting a 2d array
    int **arr =new int*[n];
    for(int i=0 ; i<n ; i++){
        arr[i] =new int[n];

    }
    // creation done

    //taking input
    for(int i=0 ;i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin>> arr[i][j];

        }
    }
    //  taking output
    for(int i=0 ;i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout <<  arr[i][j];

        }
    }
    // jb bhi hm heap mein kuch karte h tb hme toh 
    // delete bhi krna hota h yaad h na , so

    // releasing memory 
    // yeh hmne pointer se jo  array bnaya tha wo relase kraya 

    for(int i=0 ;i<n; i++){
        delete[] arr[i];

    }
    // relase krna int * wla
    delete []arr;

    
    return 0;

}
// when row and column are different 

/* int row;
cin >>row;

int col;
cin >> col; 

 // craeting a 2d array
 int **arr =new int*[row];
 for(int i=0 ; i<n ; i++){
     arr[i] =new int[col];

 }
 // creation done

 //taking input
 for(int i=0 ;i<row ; i++){
     for(int j=0 ; j<col ; j++){
         cin>> arr[row][col];

     }
 }
 //  taking output
 for(int i=0 ;i<row ; i++){
     for(int j=0 ; j<col ; j++){
         cout <<  arr[row][col];

     }
 }
 return 0;

}*/