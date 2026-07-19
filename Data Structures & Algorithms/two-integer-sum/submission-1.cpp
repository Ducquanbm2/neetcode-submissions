class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int, int>s;
        for (int i = 0; i < nums.size();i++) {
            if (s[target - nums[i]] != 0) {
                ans.push_back(s[target - nums[i]] - 1);
                ans.push_back(i);
                return ans;
            }
            if (s[nums[i]] == 0) {
                s[nums[i]] = i + 1;
            }
        }
    }
};
