class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int max_end_here=0;
    int max_so_far=INT_MIN;
      int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]<=max_end_here+arr[i]){
            max_end_here+=arr[i];
        }
        else{
            max_end_here=arr[i];
        }
        if(max_end_here>max_so_far){
            max_so_far=max_end_here;
        }
    }
    return max_so_far;
    }
};