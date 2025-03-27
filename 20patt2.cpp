 #include<iostream>
 using namespace std;
int main (){
 int n ;
  cin >>n;
  int row = 1;
  

  while(row<=n){
    int col =1;
    while(col<=n-row+1){
      

      cout << "*";
       //star = star-1;
      col = col+1;

    }

    
    cout << endl;
    row =row +1;
  }

}


 
  
