class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        vector<int> a;
        for(int i=0;i<arr.size();i++) mp[arr[i]]++;
        for(auto i:mp) a.push_back(i.second);
        sort(a.begin(),a.end());
        int count=a.size();
        for(int i=0;i<a.size();i++){
            if(k>=a[i]){
                count--;
                k-=a[i];
            }
            else return count;
        }
        return count;

    }
};