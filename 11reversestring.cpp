#include<iostream>
using namespace std;

void reverse(string& str , int i , int j ){ // &isliye use kiya kyuki jo hm change kr rhe the vo main mein horha tha toh isliye hmne reffernce variable bnaya isse void mein change hoyega
    // string& str kyuki yeh toh nyi string bni h
    //  base case
    if(i>j){
        return ;
    }
    swap(str[i], str[j]);
    i++;
    j--;

    // recursive call
    reverse(str ,i,j);

}
int main(){
    string name = "abcde";
    reverse(name, 0 ,name.length()-1);
    cout << name << endl;
    return 0;
}

// isko  aur optimize kreke dekho hm do pointer ki jagah ek pointer hi le toh
// help int i ,  int n-i-1;