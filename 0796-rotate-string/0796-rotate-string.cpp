class Solution {
public:
    bool rotateString(string s, string goal) {
        string str = s+s;
        if(s.length() == goal.length()){
        return (s + s).find(goal) != std::string::npos;
        }
        return false;
    }
};