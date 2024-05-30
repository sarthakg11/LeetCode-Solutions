//Faster Method
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> frequency;
        int pairs=0;
        for(int i=0;i<nums.size();i++){
            if(frequency.find(nums[i]-k)!=frequency.end()) pairs+=frequency[nums[i]-k];
            if(frequency.find(nums[i]+k)!=frequency.end()) pairs+=frequency[nums[i]+k];
            frequency[nums[i]]++;
        }
        return pairs;
    }
};