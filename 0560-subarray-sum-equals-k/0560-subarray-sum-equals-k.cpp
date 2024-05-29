class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0, count=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k) count++;
            int r=sum-k;
            if(mp.find(r)!=mp.end()) {
                count+=mp[r];
            }
            mp[sum]++;
        }
        return count;
    }
};