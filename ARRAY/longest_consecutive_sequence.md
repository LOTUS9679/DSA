class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int longest=0;
        unordered_set<int>st;
        for(int i=0;i<n;i++)
        {
          st.insert(nums[i]);
        }
        for(int it : st)
        {
            if(st.find(it-1)==st.end())
            {
                int cnt =1;
                int curr_num=it;
                while(st.find(curr_num+1)!=st.end())
                {
                    curr_num=curr_num+1;
                    cnt++;
                }
                longest=max(longest,cnt);
            }
            
        }
        return longest ;
    }
};


This the correct solution for the longest consecutive sequence 
The time complexity for this code is O(n),how ? let's brek it down 

For the first for loop the TC id O(n).
For the 2nd for loop  TC is O(n) and the outer while loop is also O(n) so over all should be O(n^2), but it is O(2n) how ?

The while loop only ever executes if the current number is the start of a sequence. This means the while loop will only step forward through a sequence once.

f your array is [1, 2, 3, 4, 5]:
it = 1: The while loop runs 4 times (visiting 2, 3, 4, 5).
it = 2: Skipped instantly in O(1) time.
it = 3: Skipped instantly in O(1) time.
it = 4: Skipped instantly in O(1) time.
it = 5: Skipped instantly in O(1) time.

Populating Set: O(n)
Finding sequences: O(n) (Outer loop) + O(n) (Inner loop aggregate)
Total Time Complexity: O(n)+O(2n)=O(3n)
After removing the constant  it is O(n);

