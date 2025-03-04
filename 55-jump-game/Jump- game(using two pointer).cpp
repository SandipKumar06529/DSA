#include <algorithm>

class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int max_jump = nums[0];

        for (int i = 1; i < nums.size(); ++i) {

            if (i > max_jump) {

                return false;
            }
            max_jump = std::max(max_jump, i + nums[i]);
        }
        return true;
    }
};
