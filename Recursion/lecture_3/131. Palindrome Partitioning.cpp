class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        if(s.empty()){
            return ans;
        }

        vector<string>current_substrings;
        backtracking(s,current_substrings,ans,0);
        return ans;
    }

    void backtracking(string &s, vector<string> &current_substrings, vector<vector<string>>&ans,int index){
        if(index == s.length()){
            ans.push_back(current_substrings);
            return;
        }

        for(int i = index;i<s.length();i++){
            string substring = s.substr(index,i - index + 1);
            if(is_palindrome(substring)){
                current_substrings.push_back(substring);
                backtracking(s,current_substrings,ans,i + 1);
                current_substrings.pop_back();
            }
        }
    }

    bool is_palindrome(string &str) {
        int i = 0, j = str.length() - 1;
        while (i < j) {
            if (str[i++] != str[j--]) return false;
        }
        return true;
    }
};