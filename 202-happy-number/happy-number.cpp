class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> check;

        while(check.find(n) == check.end()){
            check.insert(n);
            n = NextNo(n);
            if(n==1){
                return true;
            }
        }
        return false;
    }

private:
    int NextNo(int n){
        int op = 0;

        while(n>0){
            int digit = n %10;
            op += digit * digit;
            n = n / 10;
        }

        return op;
    }
   
};