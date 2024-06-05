class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> minfrequency;
        
        for(char ch='a';ch<='z';ch++) {
            minfrequency[ch]=1000;   
        }
        for(auto word:words){
            unordered_map<char,int> frequency;
            for(auto ch:word){
                frequency[ch]++;
            }
            for(char ch='a';ch<='z';ch++) {
                minfrequency[ch]=min(frequency[ch],minfrequency[ch]);   
            }
        }
        vector<string> ans;
        for(char ch='a';ch<='z';ch++) {
            while(minfrequency[ch]>0){
                ans.push_back(string(1,ch));
                minfrequency[ch]--;
            }
        }
        return ans;

        

    }
};