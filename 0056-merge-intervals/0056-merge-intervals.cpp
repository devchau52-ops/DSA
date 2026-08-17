class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        sort(interval.begin(), interval.end());

        vector<vector<int>> ans;

        for (int i = 0; i < interval.size(); i++) {
            if (ans.empty()) {
                ans.push_back(interval[i]);
            }
            else {
                vector<int>& v = ans.back();

                if (interval[i][0] <= v[1]) {
                    v[1] = max(v[1], interval[i][1]);
                }
                else {
                    ans.push_back(interval[i]);
                }
            }
        }

        return ans;
    }
};