1. 
Header : #include <map>
---
2. 
**Declaration**

map<int,int> mp;
map<char,int> mp;
map<string,int> mp;
map<int,string> mp;
map<int,vector<int>> mp;
---
3. 
**Initialization**

map<int,int> mp = {
    {1,10},
    {2,20},
    {3,30}
};
---
4. 
**Insert ⭐⭐⭐**

Method 1 : mp[5] = 100;
---
Method 2 : mp.insert({5,100});
---
Method 3 : mp.emplace(5,100);
---
5. 
**Update Value**

mp[5] = 500;
---
6. 
**Frequency Counting ⭐⭐⭐**
mp[x]++;

Example
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
**Find ⭐⭐⭐**

auto it = mp.find(5);
if(it != mp.end())
{
    cout<<"Found";
}
---
10. 
**Count**

mp.count(5);
Returns
1 -> Present
0 -> Not Present
---
11. 
**Erase by Key**
mp.erase(5);
---
12. 
**Erase by Iterator**

auto it = mp.find(5);
mp.erase(it);
---
13. 
**Erase Range**

mp.erase(mp.begin(), mp.find(5));
---
14. 
**Clear**

mp.clear();
---
15. 
**Size**
mp.size();
---
16. 
**Empty**
mp.empty();
---
17. 
**Traverse ⭐⭐⭐**
Range Loop
for(auto x:mp)
{
    cout<<x.first<<" "<<x.second<<endl;
}
---
Iteator

for(auto it=mp.begin();it!=mp.end();it++)
{
    cout<<it->first<<" "<<it->second<<endl;
}
---
18. 
**Key**
x.first
---
19. 
**Value**
x.second
---
20. 
**Begin**
mp.begin();
---
21. 
**End**
mp.end();
---
22. 
**Reverse Begin**
mp.rbegin();
---
23. 
**Reverse End**
mp.rend();
---
24. 
**Lower Bound ⭐⭐⭐**

Returns first key >= key
auto it = mp.lower_bound(5);
Example
Keys
1 3 5 7 9
mp.lower_bound(4);
Returns
5
Access
cout<<it->first;
cout<<it->second;
---
25. 
**Upper Bound ⭐⭐⭐**
Returns first key > key
auto it = mp.upper_bound(5);
Returns
7
---
26. 
**Swap**
mp1.swap(mp2);
swap(mp1,mp2);
---
27. 
**Copy**
map<int,int> mp2=mp;
---
28. 
**Equality**
if(mp1==mp2)
---
29. 
**Contains (C++20)**
mp.contains(5);
---
30. 
**Pair Map**
map<pair<int,int>,int> mp;
---
31. 
**Nested Map**
map<int,map<int,int>> mp;
---
32. 
**Map of Vector**
map<int,vector<int>> mp;
---
33. 
**Map of Set**
map<int,set<int>> mp;
---
34. 
**Maximum Key**
auto it = prev(mp.end());
cout<<it->first;
---
35. 
**Minimum Key**
cout<<mp.begin()->first;
---
36. 
**Next Iterator**
auto it = next(mp.begin());
---
37. 
**Previous Iterator**
auto it = prev(mp.end());
---
38. 
**Distance**
distance(mp.begin(),it);
---
39. 
**Reverse Traversal**
for(auto it=mp.rbegin();it!=mp.rend();it++)
{
    cout<<it->first<<" "<<it->second;
}
---
40. 
**Merge (C++17)**
mp1.merge(mp2);
---
41. 
**Extract (C++17)**
auto node = mp.extract(5);
---
42. 
**Common DSA Pattern – Frequency Map**
map<int,int> freq;
for(int x:nums)
{
    freq[x]++;
}
---
43. 
**Common DSA Pattern – Character Count**
map<char,int> freq;
for(char c:s)
{
    freq[c]++;
}
---
44. 
**Common DSA Pattern – Word Count**
map<string,int> freq;
for(string word:words)
{
    freq[word]++;
}
---
45. 
**Check if Key Exists**
if(mp.find(key)!=mp.end())
or
if(mp.count(key))
---
# Time Complexity

Operation	      Complexity

insert()	      O(log n)
emplace()	      O(log n)
erase()	          O(log n)
find()	          O(log n)
count()	          O(log n)
lower_bound()	  O(log n)
upper_bound()	  O(log n)
access []	      O(log n)
size()	          O(1)
empty()	          O(1)
clear()           O(n)

---

⭐ Operations to Memorize for DSA

These are the ones you'll use repeatedly in NeetCode, LeetCode, and interviews:

map<int,int> mp;

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

# // Lower Bound
mp.lower_bound(key);

# // Upper Bound
mp.upper_bound(key);

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
mp.rbegin();
mp.rend();

📌 map vs unordered_map

Feature	map	unordered_map

Order	Sorted by key	No order
Implementation	Red-Black Tree	Hash Table
Search	O(log n)	Average O(1)
lower_bound()	✅ Yes	❌ No
upper_bound()	✅ Yes	❌ No


For most interview problems where you don't need sorted keys, prefer unordered_map because of its average O(1) performance. Use map when you need the keys to remain sorted or when you need operations like lower_bound() and upper_bound().