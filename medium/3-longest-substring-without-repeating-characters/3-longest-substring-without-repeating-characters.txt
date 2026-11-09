class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int start = 0;
        int ans = 0;
        for (int end = 0; end < s.size(); end++) {
            if (mp.find(s[end]) != mp.end()) {
                start = max(start, mp[s[end]] + 1);
            }
            mp[s[end]] = end;
            ans = max(ans, end - start + 1);
        }
        return ans;
    }
};