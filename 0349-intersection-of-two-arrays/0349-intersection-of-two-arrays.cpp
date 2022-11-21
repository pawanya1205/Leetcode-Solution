class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> h;
        vector<int> v;
        for(int i=0;i<nums1.size();i++){
            h.insert(nums1[i]);
        }
        
        for(int j=0;j<nums2.size();j++){
            if(h.find(nums2[j])!=h.end()){
                v.push_back(nums2[j]);
                h.erase(nums2[j]);
            }
        }
        return v;
    }
};