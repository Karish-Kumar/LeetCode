class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;

            if (mpp[nums[i]] > 1) {
                return nums[i];
            }
        }

        return -1;
    }
};
