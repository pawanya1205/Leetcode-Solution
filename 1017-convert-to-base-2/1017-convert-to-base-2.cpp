class Solution {
public:
    string baseNeg2(int n) {
        if(n==0){
            return "0";
        }
            string s;
        while(n!=0){
            if(abs(n%2)==1){
                s+="1";
                n=(n-1)/(-2);
            }
            else{
                s+="0";
                    n=n/(-2);
            }
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
};