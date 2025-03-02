class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int k=1;
    for(int i=1; i<nums.size(); i++){
        if(nums[i]!= nums[i-1]){
            nums[k] =nums[i];
            k++;
        }
        
    }
    return k;
        
    }
};



// using hashmap
/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, bool> hashmap; // HashMap to track unique numbers
        int index = 0; // Pointer to insert unique elements
        
        for (int num : nums) { // Iterate through the array
            if (hashmap.find(num) == hashmap.end()) { // If num is NOT in hashmap
                hashmap[num] = true; // Mark num as found
                nums[index] = num; // Store unique num in-place
                index++; // Move to next position
            }
        }
        
        return index; // New length of unique elements
    }
};
*/
