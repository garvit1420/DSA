#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs<0){
        return 0;
    }
     if(nStairs==0){
         return 1;
    }

    // recursive all
    int ans = countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ans;
}

// isme fourth case pe tle hi ayegi hi kyuki isko hm optimize kare ge by dynamic programming se wo abhi padhini