class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int min_value = nums[0];
        int Max_diff = -1;
        for(int i=1; i<nums.size(); i++){
            if(min_value<nums[i]){
            Max_diff = max(Max_diff,nums[i]- min_value);
            }
            min_value = min(min_value, nums[i]);
        }

            return Max_diff;
        
    }
};