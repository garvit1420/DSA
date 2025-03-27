#include<iostream>
using namespace std;
int main(){
int n ;
 cin >>n;
 int i=1;
 while(i<=n){
    int space =0;
    while(space<i){
        cout << "  ";
        space  = space +1;
    }
    int j=i;
    while(j<=n){
    cout << i;
    j=j+1;
 }

cout <<  endl ;
  i=i+1;
}
}