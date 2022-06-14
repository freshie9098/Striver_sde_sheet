class Solution
{
    private:
    void f(vector<int>arr,int i,int sum,vector<int>&v){
        if(i==arr.size()){
            v.push_back(sum);
            return;
        }
        //pick
        f(arr,i+1,sum+arr[i],v);
    //not pick
    f(arr,i+1,sum,v);
    }
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
       vector<int>v;
        f(arr,0,0,v);
      
       
        return v;
    }
};
