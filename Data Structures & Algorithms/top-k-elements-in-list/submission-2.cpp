class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq_map;
        for(int& x : nums){
            freq_map[x]++;
        }

        vector<pair<int,int>> freq;

        for(auto& it : freq_map){
            freq.push_back({it.second,it.first});
        }

        sort(freq.rbegin() , freq.rend() );

        vector<int> ans(k);
        for(int i = 0 ; i < k ; i++){
            ans[i] = freq[i].second;
        }
        return ans;
    }
};
