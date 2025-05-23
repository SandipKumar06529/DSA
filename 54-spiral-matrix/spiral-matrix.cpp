class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int top=0, left =0;
        int bottom =n-1, right= m-1;

      
        while(top<=bottom && left<=right){

            //left-> right
            for(int i = left; i<=right; i++){
                result.push_back(matrix[top][i]);
            }
            top++;

            //right(top)->bottom
            for(int i = top; i <= bottom; i++){
                result.push_back(matrix[i][right]);
            }
            right--;

            //bottom(right)-> left
            if(top<=bottom){
                for(int i= right; i>=left; i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;

            }
            //left(bottom)- up
            if(left<=right){
                for(int i=bottom; i>=top; i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;

        
    }
};