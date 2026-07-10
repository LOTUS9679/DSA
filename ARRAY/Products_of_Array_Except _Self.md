#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<unordered_set>
using namespace std;
class Solution {
public:
 vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        
        // Calculate prefix products
        int leftProd = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = leftProd;
            leftProd *= nums[i];
        }
        
        // Calculate suffix products and multiply with prefix
        int rightProd = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= rightProd;
            rightProd *= nums[i];
        }
        
        return ans;
    }
};
int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 4, 6};
    
    // Capture the returned vector
    vector<int> result = sol.productExceptSelf(nums);
    
    // Loop through the returned vector to print the results
    cout << "Product Except Self: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << "\n";
    return 0;

}

The progrram has O(n) time complexity
given nums =[1,2,4,6]
For thr first for loop 

i=0,   ans[0]=left_prod=1,  
left_prod=left_prod * nums[0]=1*1=1,  [1,1,1,1]

i=1,   ans[1]=left_prod=1,  
left_prod=left_prod * nums[0]=1*2=2,  [1,1,1,1]

i=2,   ans[2]=left_prod=2,  
left_prod=left_prod * nums[0]=2*4=8,  [1,1,2,1]

i=3,   ans[3]=left_prod=8,  
left_prod=left_prod * nums[0]=8*6=48, [1,1,2,8]

And the time complexity is O(n) for n time iteration.

Iteration for the 2nd for loop O(n)

now the ans array is  ans=[1,1,2,8],given nums=[1,2,4,6],right_prod=1

 i=3,  ans[3] =  ans[3]*right_prod = 8 * 1 = 8
 right_prod = right_prod * nums[3] = 1*6 = 6

 i=2,  ans[2] = ans[2]*right_prod = 2 * 6 = 12
 right_prod = right_prod * nums[2] = 6*4 = 24

 i=1,  ans[1] = ans[1]*right_prod = 1 * 24 = 24
 right_prod = right_prod * nums[1] = 24*2=48

 i=0,  ans[0] = ans[0]*right_prod =  1 * 48 = 48
 right_prod = right_prod * nums[1] = 48*1=6

 over all time complexity is O(n)+O(n)=O(2n)=O(n)


 


