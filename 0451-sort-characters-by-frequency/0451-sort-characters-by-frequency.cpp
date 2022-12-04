class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char x:s)
            mp[x]++;
        priority_queue<pair<int,char>>pq;
        for(auto y:mp ){
            pq.push({y.second,y.first});
            
        }
        string ss="";
        while(!pq.empty()){
            ss+=string(pq.top().first,pq.top().second);
            pq.pop();
        }
        return ss;
    }
};