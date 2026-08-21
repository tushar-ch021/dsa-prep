class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int largest=nums[0];
        int maxFre=0;
        for(auto it = m.begin(); it != m.end(); ++it){
            if( it->second > maxFre) {
                maxFre=it->second;
                largest=it->first;
                }
        }
        return largest;
    }
};