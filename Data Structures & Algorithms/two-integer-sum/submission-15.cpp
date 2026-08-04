class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            auto it = freq.find(target - nums[i]);
            if (it != freq.end()) {
                return{it->second, i};
            }
            freq[nums[i]] = i;
        }
        return {};
    }
};
