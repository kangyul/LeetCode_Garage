class Solution {
public:
    int mySqrt(int x) {
        int s = 1; 
        int e = x;
        int mid = 0;
        int ans = 0;
        
        while (s <= e) {
            mid = s + (e-s)/2;
            
            if(mid > x/mid) {
                e = mid - 1;
            } else {
                ans = mid;
                s = mid + 1;
            }
        }
        
        return ans;
    }
};