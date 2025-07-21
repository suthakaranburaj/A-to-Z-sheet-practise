class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> digitToLetters = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };  
        vector<string>ans;
        if(digits.empty()){
            return ans;
        }
        string current;
        backtrack(0,digits,ans,current,digitToLetters);
        return ans;
    }
    void backtrack(int index,string &digits, vector<string>&ans, string &current, unordered_map<char,string> &digitToLetters){
        if(digits.length() == index){
            ans.push_back(current);
            return;
        }
        string letters = digitToLetters[digits[index]];
        for( char letter : letters){
            current.push_back(letter);
            backtrack(index + 1,digits,ans,current,digitToLetters);
            current.pop_back();
        }
    }
};