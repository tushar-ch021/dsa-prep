class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){ // push vaulse with the freq
            m[nums[i]]++;
        }
        vector<int>res;
        vector<pair<int, int>> v(m.begin(), m.end());
        // sort vector on the basis of frequency
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        // push the value with highest frerquency
        for(auto it : v ){
            if(res.size()>=k) break;
            res.push_back(it.first);
        } return res;
    }
};