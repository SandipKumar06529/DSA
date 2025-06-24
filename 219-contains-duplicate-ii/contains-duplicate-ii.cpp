class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mapIndex;

        for(int i=0; i<nums.size(); i++){
            if(mapIndex.find(nums[i]) != mapIndex.end()){
                if(i - mapIndex[nums[i]] <= k){
                    return true;
                }
            }

            mapIndex[nums[i]] = i;
        }
        
        return false;
        
    }
};