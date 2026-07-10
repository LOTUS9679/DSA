solution 1

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int j=0;j<nums.size();j++)
        {
            for(int i=j+1;i<nums.size();i++)
            {
                if (nums[i]==nums[j])
                {
                   return true;
                } 
            }
            
        }
        return false;
    }
};

  for the outer  loop the iteration are 

  j = 0
  j = 1
  j = 2
  ...
  j = n-1 exactly n number of iteration so O(n)

  Now inside each iteration 

  For j=0 ,i=1,2,3,4,.....n-1 
  n-1 number of iteration 

For j=1 ,i=2,3,4,5,.....n-1 
n-2 number of iteration 

For j=2 ,i=3,4,5,6,.....n-1 
n-3 number of iteration 

Eventually ate j=n-2 i=n-1 means only 1 iteration 

and at j=n-1 inner loop no iteration 

now total work is

(n-1)+(n-2)+(n-3)+(n-4)+.......+3+2+1+0=n(n-1)/2

O((n^2-n)/2)
=O(n^2) remove the constant and n^2>n




solution 2 

use of hashing of unorderset

class Solution {
public:
    bool hasDuplicate(vector<int>& nums){
        int n=nums.size();
     unordered_set<int>st;
     for(int i=0;i<n;i++)
     {
        if(st.find(nums[i])!=st.end())
        {
            return true;
        }
        else
        {
            st.insert(nums[i]);
        }
     }
     return false;
    }
};

Here the time complexity is

in side the for loop 

find ->O(1) +insert->O(1)=O(2)

In one iteration 
T = O(find) + O(insert)
= O(1) + O(1)
= O(2)
= O(1)

The iteration happend  for n times so 
T(n)=n*O(1)=O(n)
