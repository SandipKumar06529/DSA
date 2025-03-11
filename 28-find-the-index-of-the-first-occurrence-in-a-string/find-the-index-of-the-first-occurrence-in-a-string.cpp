class Solution {
public:
    int strStr(string haystack, string needle) {  
        int pos = haystack.find(needle); 
        if (haystack.find(needle) != string::npos) {
            return pos; 
        } else {
            return -1; 
        }
      
    }
};



/*

class Solution {
public:
    int strStr(string haystack, string needle) {  
        int pos = haystack.find(needle); 
        if (haystack.find(needle) != string::npos) {
            return pos; 
        } else {
            return -1; 
        }
      
    }
}
*/
