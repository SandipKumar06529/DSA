#include <algorithm>

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int left=0,right=0;
        int n=nums.size();
        while(right<n-1){
            int farthest=right;
            for(int i=left;i<=right;i++){
                farthest=max(farthest,i+nums[i]);
            }
            if(farthest==right){
                return false;
            }
            left=left+1;
            right=farthest;
        }
        return true;
        
    }
};
