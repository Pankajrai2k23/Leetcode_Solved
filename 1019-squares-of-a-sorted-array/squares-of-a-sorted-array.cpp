class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>arr(nums.size());
        int i=0;int j=nums.size()-1;
        int k=j;
        int sq1;int sq2;
        while(i<=j)
        {
          sq1=nums[i]*nums[i];
          sq2=nums[j]*nums[j];
          if(sq1>sq2){
            
            arr[k]=sq1;
            i++;
            k--;

          }else{
            arr[k]=sq2;
            j--;
            k--;
          }
         
        }
        return arr;       
        
    }
};