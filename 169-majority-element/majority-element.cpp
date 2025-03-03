class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = nums.size();
        sort(nums.begin(), nums.end());
        return nums[x/2];
        
    }
};