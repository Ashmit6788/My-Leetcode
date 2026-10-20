class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int ans = 0;
        int prev = 0;
        for(int i=0;i<n;i++){
            int curr = 0;
            switch(s[i]){
                case 'I' : curr = 1;
                break;
                case 'V' : curr = 5;
                break;
                case 'X' : curr = 10;
                break;
                case 'L' : curr = 50;
                break;
                case 'C' : curr = 100;
                break;
                case 'D' : curr = 500;
                break;
                case 'M' : curr = 1000;
                break;
            }
            if(curr>prev){
                ans += curr - 2*prev;
            }
            else{
                ans+=curr;
            }
            prev = curr;
        }
        return ans;
    }
};