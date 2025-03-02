class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2;
        if (nums.size() < 2)
            return nums.size();

        for (int i = 2; i < nums.size(); ++i) {
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
        
    }
};



/*
USING COUNT METHOD:

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=1;
        int k=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                count++;
            }
            else{
                count=1;
            }
            if(count<=2){
                nums[k]=nums[i];
                k++;
                }
        
        
        }
        return k;
    }
};

*/
