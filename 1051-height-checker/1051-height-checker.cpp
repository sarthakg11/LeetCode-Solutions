class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size(), ans=0;
        vector<int> expected(n,0);
        for(int i=0;i<n;i++) expected[i]=heights[i];
        sort(expected.begin(),expected.end());
        for(int i=0;i<n;i++) {
            if (expected[i]!=heights[i]) ans++;
        }
        return ans;

    }
};