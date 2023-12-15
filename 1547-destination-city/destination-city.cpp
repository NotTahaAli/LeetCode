class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string> dest;
        string current = paths[0][1];
        for (int i = 0; i < paths.size(); i++) {
            dest.insert({paths[i][0],paths[i][1]});
        }
        while (dest.contains(current)) {
            current = dest[current];
        }
        return current;
    }
};