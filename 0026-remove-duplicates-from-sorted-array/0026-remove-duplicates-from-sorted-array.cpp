#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) return 0;
        
        auto it =unique(nums.begin(), nums.end());
        return distance(nums.begin(), it);
    }
};