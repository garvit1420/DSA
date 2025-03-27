#include<iostream>
using namespace std;

bool isPresent(int arr[][4] , int target , int row ,int col){//c++ col bata na hi padta h nito error aa jata h *\ 

        for(int row=0 ;  row<3 ;row++){
            for(int col=0; col<4 ;col++){
                if(arr[row][col] == target){
                    return true;
                }
            }
        }
        return false ;
    }
    //to  print row wise sum
    void printSum(int arr[][3] , int row, int col){
        cout << "printing sum " << endl;
        for (int row =0 ; row<3 ; row++){
            int sum =0;
            for(int col =0 ; col < 3 ;col++){
                sum += arr[row][col];
            }
            cout << sum << "  ";
        }
        cout << endl;
    }
int main(){ 
    int arr[3][4];
        // taking input
        for(int row=0 ;  row<3 ;row++){
            for(int col=0; col<4 ;col++){
                cin >> arr[row][col];
            }
        }



   //print
  for(int row=0 ;  row<3 ;row++){
      for(int col=0; col<4 ;col++){
          cout <<arr[row][col]<< " ";

        }
      cout << endl;
    }

   cout << "enter the element to search " << endl;
   int target ;
   cin >> target ;

    if(isPresent(arr , target ,3,4)){
         cout << "element found" <<endl;
    }
    else{
        cout<<" element  not found" << endl;
    }
  return 0 ;
}