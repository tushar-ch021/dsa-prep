class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int cnt=1;
        int maxi=1;
       
        for(int i=1;i<nums.size();i++){
            
            if(nums[i] == nums[i-1]){ continue; }
            else if((nums[i-1]+1)==nums[i]) {cnt++; }
           else{
             maxi=max(maxi,cnt);
             cnt=1;
           }
        }
            maxi=max(maxi,cnt);
        return maxi;
    }
};