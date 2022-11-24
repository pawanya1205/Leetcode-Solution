class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int res=(nums[0]-1)*(nums[1]-1);
        return res;
    }
};