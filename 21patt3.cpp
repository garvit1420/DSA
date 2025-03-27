 #include<iostream>
 using namespace std;
int main (){
 int n ;
  cin >>n;
  int row = 1;
  while(row<=n){
    int space =  0; // sir ka logic i-1
    while(space<row ){  // space>0
        cout<< " ";
        space = space +1;// space 1<1 hogya toh yeh loop se bhr nikal  aya
        
    }
    int col = row;
    while(col<=n){
    cout << "*";
    col = col+1;
    }
    cout << endl;
    row =row+1 ; 
 }
  
}