class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> output;
        int s1 = nums1.size();
        int s2 = nums2.size();
        int so = 0;
        for (int i = 0; i < s1; i++) {
            bool found = false;
            for (int j = 0; j < so; j++) {
                if (output[j] == nums1[i]) {
                    found = true;
                    break;
                }
            }
            if (found) continue;
            for (int j = 0; j < s2; j++) {
                if (nums2[j] == nums1[i]) {
                    output.push_back(nums1[i]);
                    so++;
                    break;
                }
            }
        }
        return output;
    }
};