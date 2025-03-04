class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n= nums.size();
        int max_position = 0;
        for(int i=0; i<n; i++){
            if(i>max_position) return false;
            max_position =  max(max_position, i+nums[i]);
            if(max_position>=n-1){
                return true;
            }
        }
        return true;
    }
};