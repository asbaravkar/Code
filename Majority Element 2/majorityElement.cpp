class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = -1, num2 = -1, count1 = 0, count2 = 0;
        int len = nums.size();
        for(int i=0; i<len; i++){
            if(nums[i] == num1) count1++;
            else if(nums[i] == num2) count2++;
            else if(count1 == 0){
                num1 = nums[i];
                    count1=1;
            }
            else if(count2 == 0){
                num2 = nums[i];
                    count2=1;
            }
            else{
                count1--; count2--;
            }
        }
        count1=0; count2=0;
        for(int i=0; i<len; i++){
            if(nums[i] == num1) count1++;
            else if(nums[i] == num2) count2++;
        }
        vector<int> res;
        if(count1 > len/3) res.push_back(num1);
        if (count2 > len/3) res.push_back(num2);
        return res;
    }
    
};


/*
Boyer Moore Voting Algorithm
Initialization: num1 = -1 , num2 = -1, count1=0, count = 0;

for ele in nums:
    if ele == num1:
        count1++;
    elif ele == num2:
        count2++;
    elif count1 == 0:
        num1 = ele
        count1=0
    elif count2 == 0:
        count2 = 0
    else:
        count1--;
        count2--;

count1 = count2 = 0

for ele in nums:
    if ele == num1:
        count1++
    elif ele == num2:
        count2++
        
ans = []

if count1 > len(nums)/3:
    ans.append(num1)
elif count2 > len(nums)/3;
    ans.append(num2)
    

*/