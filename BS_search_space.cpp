class Solution {
public:
    typedef long long ll ;
    bool isPossible(vector<int>& piles, int mid, int rt) {
      
       // code something 
      
      return x <= rt
    }
    int minEatingSpeed(vector<int>& piles, int h) {
      // change the low and hi accN to problem  
      int low ; 
      int hi ; 

        int result = low ;
        while(low <= hi) {
            int mid = low + (hi-low)/2 ; 
            if(isPossible()){
               // code some_conditons 
              hi = mid-1 ; 
            }
            else low = mid+1 ; 
        } 
        return result ; 
    }
};

// use this apporach when we are asked to minimize the maximum or maximize the mininum 
