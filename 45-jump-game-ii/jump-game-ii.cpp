class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        if (n == 1) return 0;
        int max_position = 0; // maximum reachable index from current postion 
        int count=0;          // number of jumps so far
        int endPoint =0;
        for(int i=0; i<n-1; i++){
            max_position =  max(max_position, i+nums[i]);
            if(i== endPoint){
                endPoint = max_position;
                count++;
            
            }
        }
          
        return count;     
    }
};