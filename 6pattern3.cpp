#include <iostream>
using namespace std;

int main (){
    int n;
  
    cin >> n;
    int i = 1;  // n=3 h na isliye i<=3 likha agr i=0 lete toh hm i=0 lete

    while (i<=n){
         
        int j =1;
        while(j<=n){
           
            cout << n-j+1;
              j=j+1;
           
        }
        cout << endl;
        i= i+1;
       

    }
}