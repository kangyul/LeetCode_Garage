class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityNum = nums[0];
        int count = 1;
        
        for (int i = 1; i < nums.size(); i++) {
            if (majorityNum == nums[i]) {
                count++;
            } else {
                count--;
                if (count == 0) {
                    majorityNum = nums[i];
                    count = 1;
                }
            }
        }
        
        return majorityNum;
    }
};