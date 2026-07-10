this code solution written by souhardya , but the syntax are reviewed by chat gpt .

 # This is  NOT most optimal soution 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        int n=nums.size();
        unordered_set<int>st;
        for(int i=0;i<n;i++)
        {
            if(st.find(target-nums[i])==st.end())
            {
                st.insert(nums[i]);
            }
            else
            {
                for(int j=0;j<n;j++)
                {
                    if(nums[j]==target-nums[i] && j!=i)
                    {
                       res.push_back(j);
                       res.push_back(i);
                       return res;
                    }
                }
               
            }
        }
        
    }
};



THIS IS THE OPTIMAL SOLUTION ;;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for( int i=0;i<nums.size();i++)
        {
            int com=target-nums[i];
            if(mp.find(com)!=mp.end())
            {
                return {mp[com],i};
            }
            mp[nums[i]]=i;
        }
        return {};

    }
};


TIME COMPLEXITY;

there is an for loop so the number of iteration and the time complexity i O(n);

And the operation insid  the code  is O(1) each so in the worst case all of them are 

 int com=target-nums[i]; 
 O(1) TC

if(mp.find(com)!=mp.end())  
O(1) in Average case in worse case O(n);

mp[nums[i]]=i; O(1)

Each itretion perform only constant time work:

for  n operation nxO(1)

SPACE COMPLEXITY;

suppose the element is not found till the last elemnt so the map can store the n element ans the space complexity is O(n);
