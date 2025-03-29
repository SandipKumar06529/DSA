// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int first=1, last=n;
        while(first<=last){
            int mid = (last-first)/2 + first;
            if(isBadVersion(mid)==true){ //the first bad version could be mid or left half, so update last 
                last=mid-1; //version higher than mid are all bad.
            }
            else{// the first bad version must be in the right half, so update first 
                first=mid+1; // version lower than mdi are all good.
            }
            
        }
       return first; 
    }
};
