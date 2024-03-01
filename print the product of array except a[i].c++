Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.
****************//***********************//**********************************************//

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size()-1;
        vector<int> ans;
        for(int i=0;i<=n;i++){
             auto temp=1;
            for(int j=0;j<=n;j++){
                if(j==i){
                    continue;
                }else{
                    
                    temp *= nums[j];
                }
            }
        ans.push_back(temp);    
        }
    return ans;
    }
};
