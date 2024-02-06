class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for(auto word: strs) {
            char count[27] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0};
            for (char c: word) {
                count[c-'a']++;
            }
            groups[count].push_back(word);
        }
        vector<vector<string>> ans;
        for(auto p: groups) {
            ans.push_back(p.second);
        }
        return ans;
    }
};