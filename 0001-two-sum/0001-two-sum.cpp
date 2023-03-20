class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mp;
        
        for (int i = 0; i < nums.size(); i++) {
            int num = target - nums[i];
            
            if (mp.count(num)) {
                ans.push_back(mp[num]);
                ans.push_back(i);
                return ans;
            } else {
                mp[nums[i]] = i;
            }
        }
        
        return ans;
    }
};