class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        if(m!=n) {return false;
                 }
       unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        unordered_map<int,int>mp3;
        for(char i:word1)
            mp1[i]++;
         for(char i:word2)
            if(mp1.find(i)!=mp1.end())
              mp2[i]++;
        for(auto &it:mp1)
            mp3[it.second]++;
        for(auto &it:mp2)
            mp3[it.second]--;
        for(auto &it:mp3){
            if(it.second!=0) return false;
        }
        
        return true;
        
    }
};