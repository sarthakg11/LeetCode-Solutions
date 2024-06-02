class Solution {
public:
    void reverseString(vector<char>& s) {
        char ch;
        int n=s.size();
        for(int i=0;i<(n-1)/2;i++){
            ch=s[i];
            s[i]=s[n-i-1];
            s[n-i-1]=ch;
        }
    }
};