class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1;
        int n = nums.size();

        // Find pivot
        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If already the last permutation
        if(pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find element just greater than pivot
        for(int i = n - 1; i > pivot; i--) {
            if(nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // Reverse the part after pivot
        int i = pivot + 1;
        int j = n - 1;

        while(i <= j) {
            swap(nums[i++], nums[j--]);
        }
    }
};