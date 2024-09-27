class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        for (int i = 0; i < nums.size(); i++){
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == target) {
                    s.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                } else if (sum < target) {
                    j++;
                } else {
                    k--;
                }
            }
        }
       vector<vector<int>> ans(st.begin(),st.end());
        return ans;  
    }
};





//youTube video link " https://www.youtube.com/watch?v=QLec4VB4Ol0 "

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>result;
        int sum,n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++)
        {
          if(i==0 || nums[i]!=nums[i-1]) {
              int left = i+1;
              int right = n-1;
              while(left<right) {
                 sum = nums[i]+nums[left]+nums[right]; 
                 if(sum==0) {
                 result.push_back({nums[i],nums[left],nums[right]});
                
                //imp
                 while(left<right && nums[left]==nums[left+1])
                 left++;
                 
                 //imp
                 while(left<right && nums[right]==nums[right-1])
                 right--;
                 
                 left++;
                 right--;
                 }
                 
                  //imp
                 else if (sum<0) 
                 left++;
                 
                  //imp
                 else
                 right--;
              }
          }
        }
        return result;
    }
};
