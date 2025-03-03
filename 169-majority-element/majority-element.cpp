class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = nums.size();
        unordered_map<int,int>m;

        for(int i=0; i<x; i++){
            m[nums[i]]++;
        }
        x = x/2;
        for(auto y:m){
            if(y.second > x){
                return y.first;
            }
        }
        return 0;
        
    }
};