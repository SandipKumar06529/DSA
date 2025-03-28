class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> Final = heights;
        sort(Final.begin(), Final.end());
        int count = 0;
        for(int i=0; i<heights.size(); i++){
            if (heights[i] != Final[i]){
                count++;
            }
        }
        return count;    


    }
};