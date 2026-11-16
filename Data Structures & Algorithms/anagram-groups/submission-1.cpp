
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> mp;
        vector<vector<string>> ans;

        for (string& s : strs) {
            string hash(26, '0');

            for (char c : s) {
                hash[c - 'a']++;
            }

            if (mp.count(hash)) {
                ans[mp[hash]].push_back(s);
            } 
            else {
                int idx = ans.size();
                mp[hash] = idx;

                ans.push_back({s});
            }
        }

        return ans;
    }
};

