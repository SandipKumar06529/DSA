class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(auto temp:nums){
            if(k==0||k==1|| nums[k-2]!=temp){
                nums[k] =temp;
                k++;
            }
        }
        return k;
        
    }
};