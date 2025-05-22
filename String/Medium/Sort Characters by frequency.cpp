class Solution {
  public:
      string frequencySort(string s) {
          unordered_map<char, int> freq;
          for (char c : s) {
              freq[c]++;
          }
  
          vector<vector<char>> buckets(s.size() + 1);
          for (auto& [ch, count] : freq) {
              buckets[count].push_back(ch);
          }
  
          string result;
          for (int i = buckets.size() - 1; i > 0; --i) {
              for (char c : buckets[i]) {
                  result.append(i, c);
              }
          }
  
          return result;
      }
  };