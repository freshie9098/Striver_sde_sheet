class Solution {
    vector<vector<string>>ans;
    bool isPd(string&s,int i,int j){
        while(i<j){
            if(s[i++]!=s[j--])return 0;
        }
        return 1;
    }
    void f(string s,int i,vector<string>&v){
        if(i==s.size()){
            ans.push_back(v);
            return;
        }
        for(int j = i;j<s.size();++j){
            if(isPd(s,i,j)){
                v.push_back(s.substr(i,j-i+1));
                f(s,j+1,v);
                v.pop_back();
            }
            
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<string>v;
        f(s,0,v);
        return ans;
    }
};
