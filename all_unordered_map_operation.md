
1. 
**Header**
#include <unordered_map>
---
2. 
**Declaration**
unordered_map<int,int> mp;
unordered_map<char,int> mp;
unordered_map<string,int> mp;
unordered_map<int,string> mp;
---
3. 
**Initialization**
unordered_map<int,int> mp = {
    {1,10},
    {2,20},
    {3,30}
};
---
4. 
**Insert**
**Method 1 (Most Used)**
mp[5] = 100;
---
**Method 2**
mp.insert({5,100});
---
**Method 3**
mp.emplace(5,100);
---
5. 
**Update**
mp[5] = 200;
---
6. 
**Frequency Count ⭐⭐⭐**
mp[x]++;

Example
unordered_map<char,int> mp;
for(char c:s)
{
    mp[c]++;
}
---
7. 
**Decrease Frequency**
mp[x]--;
---

8. 
**Access Value**
mp[key];

Example
cout<<mp[5];
---
9. 
**Find**
mp.find(key);

Example
if(mp.find(5)!=mp.end())
{
    cout<<"Found";
}
---
10. 
**Count**
mp.count(key);

Returns
1 -> Present
0 -> Absent
---
11. 
**Erase by Key**
mp.erase(5);
---
12. 
**Erase by Iterator**
auto it=mp.find(5);
mp.erase(it);
---
13. 
**Clear**
mp.clear();
Deletes everything.
---

14. 
**Size**

mp.size();
---

15. 
**Empty**
mp.empty();

Returns
true
false
---
16. 
**Traverse ⭐⭐⭐**

Range Based
for(auto x:mp)
{
    cout<<x.first<<" "<<x.second<<endl;
}
---
**Iterator**
for(auto it=mp.begin();it!=mp.end();it++)
{
    cout<<it->first<<" "<<it->second;
}
---
17. 
**First**
x.first
Key
---
18. 
**Second**
x.second
Value
---
19. 
**Begin**
mp.begin();
---
20. 
**End**
mp.end();
---
21. 
**Swap**
mp1.swap(mp2);
swap(mp1,mp2);
---
22. 
**Copy**
unordered_map<int,int> mp2=mp;
---
23. 
**Bucket Count**
mp.bucket_count();
Rarely used.
---
24. 
**Bucket**
mp.bucket(5);
---
25. 
**Bucket Size**
mp.bucket_size(0);
---
26. 
**Load Factor**
mp.load_factor();
---
27. 
**Max Load Factor**
mp.max_load_factor();
---
28. 
**Reserve**
mp.reserve(1000);
Useful in CP.
---
29. 
**Rehash**
mp.rehash(100);
---
30. 
**Equality**
if(mp1==mp2)
---
31. 
**Check Key Exists ⭐⭐⭐**

# Method 1 if(mp.find(key)!=mp.end())

# Method 2 if(mp.count(key))
---
32. 
**Insert If Not Present**
if(mp.find(x)==mp.end())
{
    mp[x]=1;
}
---

33. 
**Character Frequency ⭐⭐⭐**

unordered_map<char,int> mp;
for(char c:s)
{
    mp[c]++;
}
---
34. 
**Integer Frequency ⭐⭐⭐**

unordered_map<int,int> mp;
for(int x:nums)
{
    mp[x]++;
}
---
35. 
**String Frequency**

unordered_map<string,int> mp;
for(string s:words)
{
    mp[s]++;
}
---
36. 
**Nested Map**

unordered_map<int,unordered_map<int,int>> mp;

---
37. 
**Vector of Map**

vector<unordered_map<int,int>> v;
---

38. 
**Map of Vector**

unordered_map<int,
vector<int>> mp;
---
39. 
**Map of Set**

unordered_map<int,
unordered_set<int>> mp;
---
40. 
**Useful Example**
Two Sum
unordered_map<int,int> mp;

for(int i=0;i<nums.size();i++)
{
    int need=target-nums[i];

    if(mp.find(need)!=mp.end())
        return {mp[need],i};

    mp[nums[i]]=i;
}


---

Time Complexity
# Operation	Average	Worst

insert()	O(1)	O(n)
emplace()	O(1)	O(n)
find()	    O(1)	O(n)
erase()	    O(1)	O(n)
count(). 	O(1)	O(n)
access []	O(1)	O(n)
size()	    O(1)	O(1)
empty()     O(n)	O(n)



---

⭐ Most Important Operations for NeetCode 150

These are the operations you'll use repeatedly:

unordered_map<int,int> mp;

# // Insert / Update
mp[key] = value;

# // Frequency
mp[x]++;
mp[x]--;

# // Access
mp[key];

# // Find
mp.find(key);

# // Count
mp.count(key);

# // Erase
mp.erase(key);

# // Size
mp.size();

# // Empty
mp.empty();

# // Clear
mp.clear();

# // Traverse
for(auto x : mp)
{
    cout << x.first << " " << x.second;
}

# // Iterators
mp.begin();
mp.end();


---

🎯 My advice for you

From everything we've worked on together (Two Sum, Group Anagrams, Sliding Window, etc.), I'd recommend making a handwritten "C++ DSA Syntax Notebook." Dedicate one page each to:

1. vector
2. string
3. unordered_set
4. unordered_map
5. stack
6. queue
7. priority_queue
