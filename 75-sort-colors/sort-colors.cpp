class Solution {
public:
    void sortColors(vector<int>& nums) {

        //Dutch national flag algorithm
        int n=nums.size();

        int low=0;int mid=0;int high=n-1;
        while (mid<=high)
        {
            if (nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;

            }else if(nums[mid]==1){
                mid++;

            }else{                   //nums[mid]==2
                swap(nums[mid],nums[high]);
                high--;
            }
            

            
        }
    
        
    }
};
//brute force approach
//  int n=nums.size();
    //  int count0=0;int count1=0;int count2=0;
    // for (int i=0;i<n;i++){
    //     if(nums[i]==0){
    //         count0++;
    //     }
    //     else if(nums[i]==1){
    //         count1++;
    //     }
    //     else{
    //         count2++;
    //     }
    // }
    // for (int j=0;j<count0;j++){
    //     nums[j]=0;
    // }
    // for(int j=count0;j<count0+count1;j++){
    //     nums[j]=1;
    // }
    // for (int j=count0+count1;j<n;j++){
    //     nums[j]=2;
    // }