class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int n = s.size();
        map<char,int>m;
        int cnt = 0;
        int i = 0,j = 0;
        while(i<n && j<n){
            m[s[j]]++;
            while(m[s[j]]>1&&i<j){
                m[s[i++]]--;
            }
            cnt = max(cnt,j-i+1);
            j++;
        }
        return cnt;
    }
};
