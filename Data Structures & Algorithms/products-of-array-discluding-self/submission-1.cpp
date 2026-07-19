class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>left(nums.size() + 1, 1);
        vector<int>right(nums.size() + 1, 1);
        vector<int>ans;
        left[0] = nums[0];
        for (int i = 1; i < nums.size();i++) {
            left[i] = left[i - 1] * nums[i];
        }
        right[nums.size() - 1] = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0;i--) {
            right[i] = right[i + 1] * nums[i];
        }
        for (int i = 0; i < nums.size();i++) {
            if (i == 0) ans.push_back(right[1]);
            else if (i == nums.size() - 1) ans.push_back(left[nums.size() - 2]);
            else ans.push_back(left[i - 1] * right[i + 1]);
        }
        return ans;
    }
};
