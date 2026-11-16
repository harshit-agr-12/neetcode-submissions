class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int idx = 0;
        unordered_map<string,int> mp;
        
        vector<vector<string>> ans;
        for(string& s : strs){
            string hash ="00000000000000000000000000";
            for(char& c : s){
                hash[c-'a']++;
            }
            if(mp.count(hash)){
                ans[mp[hash]].push_back(s);
            }else{
                mp[hash] = idx;
                ans.push_back({});
                ans[idx].push_back(s);
                idx++;
            }
        }
        return ans;
    }
};
