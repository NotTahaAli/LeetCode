class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer(temperatures.size());
        answer[temperatures.size()-1] = 0;
        for (int i = temperatures.size()-2; i >= 0; i--) {
            int temp = i+1;
            while (answer[temp] != 0 && temperatures[temp] <= temperatures[i]) {
                temp += answer[temp];
            }
            if (temperatures[temp] <= temperatures[i]) {
                answer[i] = 0;
            } else {
                answer[i] = temp-i;
            }
        }
        return answer;
    }
};