class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<int, unordered_map<int, bool>> visited;
        int currX = 0;
        int currY = 0;
        visited[currX][currY] = true;
        int n = path.size();
        for (int i = 0; i < n; i++) {
            if (path[i] == 'N') currY++;
            else if (path[i] == 'S') currY--;
            else if (path[i] == 'E') currX++;
            else if (path[i] == 'W') currX--;
            if (visited[currX][currY]) return true;
            visited[currX][currY] = true;
        }
        return false;
    }
};