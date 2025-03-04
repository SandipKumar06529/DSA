class Solution {
public:
    int hIndex(vector<int>& citations) {
        int count=0;

        sort(citations.begin(), citations.end(), greater<int>());
        int n=citations.size();
        int left=0,right=n-1;
        int result=0;
        while(left<=right){
           int mid=(left+right)/2;
           if(citations[mid]>=mid+1){
            result=mid+1;
            left=mid+1;
           }
           else{
            right=mid-1;
           }
        }
        return result;
        
    }
};
