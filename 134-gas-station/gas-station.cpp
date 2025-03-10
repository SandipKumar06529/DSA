class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0; 
        int res = 0; 
        int gasTotal = 0; 
        int costTotal = 0;
        for(int i =0; i< gas.size();i++){
            total+= gas[i]-cost[i];
            if(total<0){ 
                total = 0; 
                res = i +1; 
            }
            gasTotal+=gas[i];
            costTotal+=cost[i];
        }
        if(gasTotal< costTotal||total< 0){ 
           return -1;
        }
        return res;
        
    }
};