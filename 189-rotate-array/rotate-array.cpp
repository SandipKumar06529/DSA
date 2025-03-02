class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        k = k % n;
        vector<int>temp(n);
        for(int i=0; i<k; i++){
            temp[i]=nums[n-k+i];
        }
        for(int i=0; i<n-k; i++){
            temp[i+k]=nums[i];
        }
        
        nums=temp;
    }
};


/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
       vector<int> temp(n);
        for (int i=0;i<n;i++){
            temp[(i+k)%n] =nums[i];
        }
       nums=temp;
    }
};


explainatin

Original Index (i)	Element (nums[i])	New Index ((i + k) % n)
0	        1	        (0 + 3) % 7     = 3
1	        2	        (1 + 3) % 7     = 4
2	        3	        (2 + 3) % 7     = 5
3	        4	        (3 + 3) % 7     = 6
4	        5	        (4 + 3) % 7     = 0
5	        6	        (5 + 3) % 7     = 1
6	        7	        (6 + 3) % 7     = 2

*/
