class NumArray {
public:
    vector<int> a; // prefix array (sum)
    NumArray(vector<int>& nums) {
        a.push_back(nums[0]); // a(prefix array at 0)= nums[o]=-2
        for(int i=1; i<nums.size(); i++){
            a.push_back(nums[i] + a[i-1]);
        } // prefix sum array
        
        
    }
    
    int sumRange(int left, int right) {
        if(left==0) return a[right];
        else return a[right] - a[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */