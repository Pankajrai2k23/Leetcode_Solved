class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int i=0;int j=numbers.size()-1;
        while(i<j)
        {
            if (numbers[i]>target-numbers[j])
            {                
                j--;
                
            }else if (numbers[i]<target-numbers[j])
            {
                i++;
            }else{
                return {i+1,j+1};
            }

        } 

        
     return{};
    }
};