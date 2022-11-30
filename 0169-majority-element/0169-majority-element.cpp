class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0,me=0;
        for(int i=0;i<n;i++){
            if(cnt==0) me=nums[i];
            if(me==nums[i])
                cnt++;
            else
                cnt--;
        }
        return me;
    }
};