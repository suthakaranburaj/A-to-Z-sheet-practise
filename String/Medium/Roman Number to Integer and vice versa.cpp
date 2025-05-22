class Solution {
  public:
      int value(char a){
          switch(a){
              case 'I': return 1;
              case 'V': return 5;
              case 'X': return 10;
              case 'L': return 50;
              case 'C': return 100;
              case 'D': return 500;
              case 'M': return 1000;
              default: return 0;
          }
      }
      int romanToInt(string s) {
          int result = 0;
          for(int i =0;i<s.size();i++){
              if(i < s.size() - 1 && value(s[i]) < value(s[i + 1])) result -= value(s[i]);
              else result += value(s[i]);
          }
          return result;
      }
  };