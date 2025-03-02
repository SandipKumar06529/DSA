class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x=0;
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=val){
                k++;
            }
        }
         for(int i=0; i<nums.size(); i++){
            if(nums[i]==val){
                nums[i]=x;
            }
        }
        sort(nums.rbegin(), nums.rend());
        return k;
        
    }
};