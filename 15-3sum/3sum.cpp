class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());   //sorting the input array

        int left;int right;            //two pointers declaration
        int i=0;int sum;               //first element for the triplet
        int n=nums.size();
        for(i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])   //no duplicate triplets
            {
                continue;
            }
           left=i+1;
           right=n-1;
           sum= -1*nums[i];
           while (left<right)         // two sum in three sum (starting of two pointer)
           {
            if(nums[left]+nums[right]==sum){
                ans.push_back({nums[i],nums[left],nums[right]}); //storing triplets in ans
                left++;
                right--;
                while(left<n && nums[left]==nums[left-1]){
                    left++;
                }
                while(right>=0 && nums[right]==nums[right+1]){
                    right--;
                }
            }else if (nums[left]+nums[right]<sum){
                left++;
            }else{
                right--;
            }

           }

        }

         
 return ans;   }
};