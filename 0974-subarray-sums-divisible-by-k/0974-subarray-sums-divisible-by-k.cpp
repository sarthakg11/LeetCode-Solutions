class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size(), prefix_sum=0, rem=0, count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            prefix_sum+=nums[i];
            rem=prefix_sum%k;
            if (rem==0) count++;
            if(mp.find(rem)!=mp.end()) count+=mp[rem];
            mp[rem]++;
        }
        return count;
    }
};