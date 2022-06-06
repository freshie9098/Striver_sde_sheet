#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>>v;
    sort(intervals.begin(),intervals.end());
    v.push_back(intervals[0]);
    int x = intervals[0][0];
    int y = intervals[0][1];
    for(int i = 1;i<intervals.size();++i){
        x = v[v.size()-1][0];
        y = v[v.size()-1][1];
        if(intervals[i][0]<=y){
            v[v.size()-1][1] = max(v[v.size()-1][1],intervals[i][1]);
        }
        else{
            v.push_back(intervals[i]);
        }
    }
    return v;
}
