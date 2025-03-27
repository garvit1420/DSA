class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int rightsum=0; 
            int leftsum=0;
            for(int i =1 ; i<nums.size(); i++){  // i=0 is always pivot elemnt that's why i=1;
                rightsum+= nums[i];  //  rightsum + nums[i]
            }
            for(int i=0 ; i<nums.size(); i++){
                if(rightsum==leftsum){
                return i;
                }
              leftsum+= nums[i];
               if(i+1<nums.size()){
                rightsum-=nums[i+1]; // nums[i] isliye nhi kyuki left numi se plus ho rha h aur aap right mein agr aap nums i  se subtratc kr dege toh wo equal hi nhi ho payege knhi 
               }
            }
            return -1;
        }
    };