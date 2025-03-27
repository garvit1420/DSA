#include<iostream>
using namespace std;
int fibonnaci(int n){
    int a =0 , b=1, sum =0;
    cout << a << "   "<< b << "  ";
    for (int i=2 ; i<n ; i++){
        sum =a+b;
        cout << sum << "    ";
        a = b;
        b = sum ;
    }
      return 0;
    }
  


int main(){
    int n;
    cin >>n;

    cout <<"series sum  " << fibonnaci(n)<< endl;
}
