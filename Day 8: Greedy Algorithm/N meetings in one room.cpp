int maxMeetings(int start[], int end[], int n)
    {
        // Your code here 
        vector<vector<int>>v;
        for(int i = 0;i<n;++i){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        int cnt = 1;
        int last = v[0][0];
        for(int i = 1;i<n;++i){
            if(v[i][1]>last){
                cnt++;
                last = v[i][0];
            }
        }
        return cnt;
    }
