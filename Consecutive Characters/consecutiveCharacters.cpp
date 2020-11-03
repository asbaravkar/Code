class Solution {
public:
    int maxPower(string s) {
        int max_count = 1;
        int count = 1;
        
        char prev  = s[0];
        for(int i=1; i<s.length(); ++i){
            if(s[i] == prev){
                count++;
              max_count = max(max_count, count);  
            } 
            else{
                
                count = 1;
                prev = s[i];
            }
        }
        return max_count;
    }
};