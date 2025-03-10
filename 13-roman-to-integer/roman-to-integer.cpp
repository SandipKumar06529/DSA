class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanValues = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        int n = s.length();

        for (int i = 0; i < n; i++) {
            // Check if the next numeral is larger (subtractive case)
            if (i + 1 < n && romanValues[s[i]] < romanValues[s[i + 1]]) {
                total -= romanValues[s[i]];  // Subtract value
            } else {
                total += romanValues[s[i]];  // Add value
            }
        }

        return total;
        
    }
};