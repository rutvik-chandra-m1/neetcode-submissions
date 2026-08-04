class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> freq;
        vector<int>ans;

        for (int i = 0; i < nums.size(); i++) {
            auto it = freq.find(target - nums[i]);
            if (it != freq.end()) {
                ans.emplace_back(it->second);
                ans.emplace_back(i);
            }
            freq[nums[i]] = i;
        }
        return ans;
    }
};
