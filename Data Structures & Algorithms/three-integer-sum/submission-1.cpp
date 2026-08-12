class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    set<vector<int>> st;

    for (int i = 0; i < n; i++) {
        unordered_set<int> seen;
        for (int j = i + 1; j < n; j++) {
            int need = -nums[i] - nums[j];
            if (seen.count(need))
                st.insert({nums[i], need, nums[j]});
            seen.insert(nums[j]);
        }
    }
    return vector<vector<int>>(st.begin(), st.end());
}
};
