class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.rbegin(), citations.rend());
        int i=0;

        while(i<n && i<citations[i]) i++; // reverse the array and if c[i]is greter than index return that value.
        return i; 
    }
};