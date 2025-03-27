#include <iostream>
using namespace std;

int main (){
    int n;
  
    cin >> n;
    int row=1;
    while(row<=n){
    
         int col= 1;  // direct row isliye use nhi kra kyuki row bahut jagah kaam arha h 
        // so we can only read the row not writed a row 
     int value = row;
         while(col<=row){
            cout<< value ;
             value ++;
            col=col+1; 
         }
        cout << endl;
     row = row +1;
    }
}
       
