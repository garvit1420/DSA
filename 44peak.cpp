class Solution {
    public:
        int peakIndexInMountainArray(vector<int>& arr) {
            int s = 0;
            int e = arr.size()-1;
            int mid = s + (e-s)/2;
    
            while(s<e){ // = isliye nhi aya kyuki waps in notes
                if(arr[mid] < arr[mid+1]){
                s = mid + 1 ;
                }
                else{
                      e = mid ;  // arr[mid] > arr[mid+1]
                    }
                mid = s +(e-s)/2;
                
            }
            return s ;  // return mein s ans e dono aa sakte h no need to worry 
        }
        
    };