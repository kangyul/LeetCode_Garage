class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        
        while(s<=e) {
            int mid = s + (e-s)/2;
            int next = (mid+1)%n;
            int prev = (mid-1+n)%n;
            
            if (nums[mid] <= nums[prev] && nums[mid] <= nums[next]) {
                return nums[mid];
            } else if (nums[mid] <= nums[e]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        
        return -1;
    }
};