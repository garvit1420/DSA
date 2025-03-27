#include<iostream>
using namespace std;

int main(){
     /*// pointer to int is created , and pointing to some garbage address
      // int *p =0;
     
      // cout << *p<< endl;
     int i =5 ;
     int *q = &i;
     cout << q << endl;
     cout << *q << endl;

     int *p = 0;  // yeh and line 10 dono same hi h online coding ke exam mein puch lete h bahut br
      p = &i;

      cout << p << endl;
      cout << *p << endl;
       
      return 0;
}*/ 

// lo examle in case of a..
// a mein nhi hoyega change 

    int num =5;
    int a =num;
    cout << " a before"<< num << endl;
    a++;
    cout << " a after" << num << endl;

    a++;
    cout<< num << endl; // *p hmne ++ kra but agr hum a=num mein dalte and a++ karte toh kuch farak nhi padta ok  

    int *p =&num;
    cout << "before"<< num << endl;
    (*p)++; // *p pe hi krna padta h  and num++ karenge tb bhi chal jayega yeh toh
    cout << "after" << num << endl;

    // p ko q mein copy kese kare
    //copying a pointer
    int *q =p;
    cout << p<< " - " << q <<endl;
    cout << *p << " - " << *q << endl; 

    // important concept
    int i=3;
    int *t = &i;
    //cout << (*t)++ << endl;
    cout << "before t" << t <<endl;
    t =t+1; // same as - ke liye bhi //  in int 4 byte ka aage badega same agr char mein hoga toh 1byte ka aage bde ga
    // same aise hi double ki baat karu toh 8 byte se hoga shiftt
    cout << "after t "<< t << endl;

    return 0;

}
//Pointer Arithmetic

/*The pointer c is an int*, and in a typical system, an int takes 4 bytes.
When performing pointer arithmetic, adding 1 to a pointer moves it forward by the size of the data type (4 bytes for an int).
So, when c = c + 3;, it moves forward by:

3 * 4 = 12 bytes
    */