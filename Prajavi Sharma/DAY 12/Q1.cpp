class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        s+="-1";
        //char ans;
        int n=t.size();
        for(int i=0;i<n;i++){
            if(s[i]!=t[i]){
                return t[i];
            }
        }
        return t[n];
    }
};