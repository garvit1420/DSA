// recurrsion 
// book define  - function calls itself directly or indirectly
//by sir define - apke pass big and complex problem ka solution wo same type ki chooti problem pe depend krta h tb hm recurrsion use karte h


// recursive relation 
// F(n) = 2*f(n-1)

// in case of factorial 
// F(n)= n*f(n-1)

//factorial example
#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n==0)
       return 1;

    int smallproblem = factorial(n-1);
    int biggerProblem = n* smallproblem;

    return biggerProblem;  
    // simple in one line
    // return n*factorial(n-1);
}
    int main(){
        int n;
        cin >> n;

        int ans = factorial(n);
        cout << ans << endl;

        return 0;
    }


    //power example
/*#include<iostream>
using namespace std;

int power(int n){
    // base case
    if(n==0)
       return 1;
    // recursive relation
    int smallproblem = power(n-1);
    int biggerProblem = 2* smallproblem;

    return biggerProblem;  
    // simple in one line
    // return 2*power(n-1);
}
    int main(){
        int n;
        cin >> n;

        int ans = power(n);
        cout << ans << endl;

        return 0;
    }
        */







