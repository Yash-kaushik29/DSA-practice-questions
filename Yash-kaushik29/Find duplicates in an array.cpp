class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
       unordered_map<int,int> m;
       vector<int> v;
         
       for(int i=0 ; i<n ; i++)
       {
           m[arr[i]]++;
       }
       
       for(auto it:m)
       {
           if(it.second > 1)
            v.push_back(it.first);
       }
       
       if(v.size()==0) 
       {
           v.push_back(-1);
       }
       
       sort(v.begin(),v.end());
       
       return v; 



APPROACH - 2 USING XOR   
     

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())
             return {};
        
        vector<int> answer;
        
        sort(nums.begin(),nums.end());
        
        int ans= nums[0];
        
        for(int i=1;i<nums.size();i++){
            //using XOR
            if((ans^nums[i])==0){
                answer.push_back(nums[i]);
            }
            ans=nums[i];
        }
        return answer;
        
    }
};
