class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];

            if (mp.find(needed) != mp.end()) {
                ans.push_back(mp[needed]);
                ans.push_back(i);
                return ans;
            }

            mp[nums[i]] = i;
        }

        return ans;
    }
};