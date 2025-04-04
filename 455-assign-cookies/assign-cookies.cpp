class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
    int m=s.size();
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int rs=0;
    int lg=0;
    
    while(rs<m && lg<n ){
      if(s[rs]>=g[lg]){
        lg=lg+1;
      }
        rs=rs+1;
    }
     return lg;
    }
};