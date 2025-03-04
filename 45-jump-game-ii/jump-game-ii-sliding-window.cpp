class Solution {
public:
    int jump(vector<int>& nums) {
        int left =0, right =0;
        int n = nums.size();
        int count =0; // This will count the number of times that we can jump in order to get closer to the last index.
        while(right<n-1){
            int farthest =right;
            for(int i=left; i<=right; i++){
                farthest = max(farthest, i +nums[i]);     

            }
            if(farthest == right){
                return false; // if not closer to last index return false.
            }
            left = left +1;
            right= farthest;
            count++; // increase the count for each jump 
        }
    return count;
        
    }
};
