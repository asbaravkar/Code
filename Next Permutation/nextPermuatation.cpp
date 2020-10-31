class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        int i,j;
        for(i=size-2; i>=0; i--){
            if(nums[i] < nums[i+1]) break;
        }
        
        if(i<0) reverse(nums.begin(), nums.end()); //Last permutation
        else{
            for(j=size-1; j>i; j--){
                if(nums[j] > nums[i]) break;
            }
            swap(nums[i], nums[j]);
            reverse(nums.begin()+i+1,nums.end());
        }
    }
};
/*
ALGO
1. find index such that nums[index] < nums[index+1] (traverse from end)
2. if such index does not exist then simply reverse entire array
   if such index exist, find index2 such that nums[index2] > nums[index] (traverse from end)
3. swap(nums[index2],nums[index])
4. reverse array from index to end
*/