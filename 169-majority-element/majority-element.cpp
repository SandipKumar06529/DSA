class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x = nums.size();
        unordered_map<int,int>m;

        for(int i=0; i<x; i++){
            m[nums[i]]++; // increase the count 3->1, 2->1,3->2 
        }
        x = x/2;
        for(auto y:m){
            if(y.second > x){  // y.second is the element= count>x/2= >3->2
                return y.first;  // y.first is key => num
            }
        }
        return 0;
        
    }
};
