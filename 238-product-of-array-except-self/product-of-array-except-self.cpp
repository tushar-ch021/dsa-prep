class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int p=1;
        int cnt_zero=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0) p=p*nums[i];
             if(nums[i]==0) cnt_zero++;   
        }
        vector<int>res(n,0);
        if(cnt_zero>1) return res;
        if(cnt_zero==1){
          for(int i=0;i<n;i++){
            if(nums[i]==0) res[i]=p;
            else res[i]=0;
        } 
        return res; 
        }
        for(int i=0;i<n;i++){
            int x;
            if(nums[i]!=0) x=p/nums[i];
            if(nums[i]==0) res[i]=p;
            res[i]=x;   
        }
        return res;

    }
};