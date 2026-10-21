class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        char minchar = s[0];
        char maxchar = s[0];
        bool sorted = true;
        for(int i=0;i<n-1;i++){
            if(s[i]>s[i+1]) sorted=false;
        }
        if(sorted==true) return 0;
        if(n==2) return -1;
        for(int i=0;i<n;i++){
            minchar = min(s[i],minchar);
        }
        for(int i=0;i<n;i++){
            maxchar = max(s[i],maxchar);
        }
        if(s[0]==minchar){
            return 1;
        }
        else if(s[n-1]==maxchar){
            return 1;
        }
        for(int i=1;i<n-1;i++){
            if(s[i]==minchar || s[i]==maxchar) return 2;
        }
        return 3;
    }
};