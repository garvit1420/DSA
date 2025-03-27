#include<iostream>
using namespace std;
// 1 for prime no. 
// 0 for not prime no. 

bool isprime(int n ){

    for(int i=2 ; i<=n ; i++){
        // divide hogya h not a pime
        if(n%i==0){
            return 0;
        }

    }
    return 1;
}

int main(){
    int num;
     cin >> num;
     if(isprime(num)){
        cout<< "the no. is prime"<< endl;
    }
     else{
        cout << " the no. is not prime" << endl;
    }
return 0; 
}