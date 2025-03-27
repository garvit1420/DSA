// bubble sort



// #include <bits/stdc++.h> 
// void bubbleSort(vector<int>& arr, int n)
// {   for(int i =0 ; i<n-1; i++){
//        for(int j=0 ; j<n-i-1; j++){
//            if(arr[j]>arr[j+1]){
//               swap( arr[j], arr[j+1]);
//             }
//         }
//     }

//     // Write your code here.
// }

// Why n - i - 1?
// Initially (i = 0), the inner loop runs from j = 0 to j < n - 1, ensuring all elements are compared.
// In the next pass (i = 1), the last element is sorted, so we only need to iterate up to n - 2.
// This continues, reducing the number of comparisons, preventing unnecessary checks, and improving efficiency.