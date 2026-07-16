class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        
        int left = 0;
        int right = 1;
        int k=0;

        while(right<n){
            if(nums[right]==nums[left]){
                right++;
            }
            else{
                nums[left+1]=nums[right];
                left++;
                right++;
            }

        }
        return left+1;

       
            
    }
};