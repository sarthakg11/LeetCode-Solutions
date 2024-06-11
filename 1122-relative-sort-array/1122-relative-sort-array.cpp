class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n1=arr1.size(), n2=arr2.size();
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<n1;i++) mp[arr1[i]]++;
        for(int i=0;i<n2;i++){
            for(int j=0;j<mp[arr2[i]];j++) ans.push_back(arr2[i]);
            mp.erase(arr2[i]);
        }
        for(auto i:mp){
            for(int j=0;j<i.second;j++) ans.push_back(i.first);
            mp.erase(i.first);
        }
        return ans;
    }
};