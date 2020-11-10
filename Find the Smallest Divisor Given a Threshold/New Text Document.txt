class Solution {
public:
    
    int calculateDivision(vector<int> nums, int mid){
        int sum=0;
        for(int i=0;i<nums.size(); i++){
            sum=sum+ceil(nums[i]/float(mid));
        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int h=*max_element(nums.begin(), nums.end());
        while(l<h){
            int mid=(l+h)/2;
            if(calculateDivision(nums,mid) <= threshold) h=mid;
            else l=mid+1;
        }
        return l;
    }
};