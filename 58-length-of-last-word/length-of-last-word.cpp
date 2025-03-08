class Solution {
public:
    int lengthOfLastWord(string s) {
        int n =s.length();
        int length=0;
        int i = n-1;
        while(i>=0 && s[i]==' '){ // skip the spaces
            i--;
        }
        while(i>=0 && s[i]!=' '){ // count the letter
            length++;       // update the lendth till the next space.
            i--;
        }

        /* Using for loop
        int length=0;
        for(int i=s.size()-1;i>=0;--i){
            if(s[i]==' '&&length>0) break;
            if(s[i]!=' ') ++length;
        }
        
        */
        return length;
    }
};
