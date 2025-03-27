//insertion sort //card example
//isme swap nhi karte shift karte h ok 
//example jaise  ek  array h 10,1,7,4,8,2,11then isko karo
//10 >1 se toh 10 ko shift krdo so 1,10,7,4,8,2
// then ab 7 <10 se chota toh 7 10 ke left mein ayega whereas 7>1 se 7 one ke right mein ayega 
// starting index ko sorted mna h and i ko  1 se shru karte h 



// #include <bits/stdc++.h> 
// void insertionSort(int n, vector<int> &arr){
//     for(int i=1 ; i<n ; i++){
//        int  temp =arr[i];
//         int j = i-1;
//         for( ; j>=0 ; j--){ // while loop bhi use kr sakte h apn for good loooking
//             if(arr[j]> temp){
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1]=temp;
//     }
// }