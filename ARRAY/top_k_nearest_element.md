
This is not the optimal solution 

in initial idea is by souhardya and later correct on chat gpt 

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
    unordered_map<int,int>mp;
    for(int x:nums)
    {
        mp[x]++;
    }
    vector<pair<int,int>>freq;
    for (auto x:mp)
    {
       freq.push_back({x.second,x.first});
    }
    sort(freq.begin(),freq.end(),greater<pair<int,int>>());
    for(int i=0;i<k;i++)
    {
        ans.push_back(freq[i].second);
    }
    return ans;
   
    }
};
The time complexity of the progrram is  

For the unordered_map element insertion is O(n) for the 'n' elements 

For the next vector is O(m) because it contain 'm' unique elements.

For the sorting the the time complexity is m*log(m)

For the for loop and the vector opertion is O(k) because only 'k' elements are inserted in the vector.

n=Number of elements in the 
m=Number of unique elements 
k=Number of frequement elements

the over all time complexity is 
O(n)+O(m)+O(m*log(m))+O(k)
=O(n+m+k+mlog(m)) n>m,n>k|m=n,k=n for the worst case
=O(n+n+n+nlog(n))
=O(nlog(n))



The complexity is **nlog(n)** optimized version willbe the **O(n)**
Here we see that the sorting mechanism is the main culprit we have to replace it by 
**bucket sort**

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
    unordered_map<int,int>mp;
    for(int x:nums)
    {
        mp[x]++;
    }
    vector<vector<int>>bucket(nums.size()+1);
    for (auto x:mp)
    {
       bucket[x.second].push_back(x.first);
    }
    for(int i=nums.size();i>0;i--)
    { 
        for(int it : bucket[i])
        {
           ans.push_back(it);
           if(ans.size()==k)
           {
            return ans;
           }
        }
    }
    return ans;
   
    }
};

Here is the code  that have O(n) time complexity ,let explain solve it

unordered_map insertion O(n)
next bucket vector is   O(m)
for the next two  for loop is O(n+m)

**AT the first glance the loos may seems nested loop but but they are not**

 So over all time cimplexity is 

 O(n)+O(m)+O(n+m)
 =O(2n+2m) where n>=m
 =O(4n)
 =O(n)

