class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int, int>m;
        for(int i=0; i<n; i++){
            m[nums[i]]++;
        }
        
        vector<int> result;
        for(auto& pair: m){
            if(pair.second > n/3){
                result.push_back(pair.first);
            }
        }
        return result;
        
    }
};