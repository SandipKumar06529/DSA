class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.rbegin(), citations.rend());
        int i=0;

        while(i<n && i<citations[i]) i++;
        return i;
        

        
    }
};