class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq_map;
        for(int& x : nums){
            freq_map[x]++;
        }

        vector<pair<int,int>> freq;

        for(auto& it : freq_map){
            freq.push_back({it.first,it.second});
        }

        sort(freq.begin() , freq.end() , [](const pair<int,int> & a , const pair<int,int> & b){
            return a.second > b.second;
        });

        vector<int> ans(k);
        for(int i = 0 ; i < k ; i++){
            ans[i] = freq[i].first;
        }
        return ans;
    }
};
