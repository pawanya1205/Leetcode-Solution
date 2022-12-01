class Solution {
public:
    bool halvesAreAlike(string s) {
                int n=s.length();
        int cnt1=0,cnt2=0;
       for(int i=0;i<n/2;i++){
           if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
               cnt1++;
       }
    for(int i=n/2;i<n;i++){
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
            cnt2++;
    }
    if(cnt1==cnt2){
        return true;
    }
        else{
            return false;
        }
    }
};