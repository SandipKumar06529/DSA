class Solution {
public:
    int jump(vector<int>& nums) {
        int left =0, right =0;
        int n = nums.size();
        int count =0;
        while(right<n-1){
            int farthest =right;
            for(int i=left; i<=right; i++){
                farthest = max(farthest, i +nums[i]);
                

            }
            if(farthest == right){
                return false;
            }
            left = left +1;
            right= farthest;
            count++;
        }
    return count;
        
    }
};