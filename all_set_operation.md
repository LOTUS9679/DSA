1. Header

#include <set>
---
2. 
**Declaration**

set<int> st;
set<char> st;
set<string> st;
set<pair<int,int>> st;
---
3. 
**Initialization**

set<int> st = {5,2,1,4,3};
Output
1 2 3 4 5
Automatically sorted.
---
4. 
**Insert ⭐⭐⭐**

st.insert(10);
st.insert(20);
st.insert(30);
Time Complexity
O(log n)
---
5. 
**Emplace**

st.emplace(40);
---
6. 
**Find ⭐⭐⭐**
st.find(20);
Example
if(st.find(20)!=st.end())
{
    cout<<"Found";
}
---
7. 
**Count ⭐⭐⭐**

st.count(20);
Returns
1 -> Present
0 -> Not Present
---
8. 
**Erase by Value ⭐⭐⭐**

st.erase(20);
---
9. 
**Erase by Iterator**

auto it=st.find(30);
st.erase(it);
---
10. 
**Erase Range**
st.erase(st.begin(),st.find(5));
---
11. 
**Size**
st.size();
---
12. 
**Empty**
st.empty();
---
13. 
**Clear**
st.clear();
---
14. 
**Begin**
st.begin();
---
15. 
**End**
st.end();
---
16. 
**Reverse Begin**
st.rbegin();
---
17. 
**Reverse End**
st.rend();
---
18. 
**Traverse ⭐⭐⭐**
Range Loop

for(auto x:st)
{
    cout<<x<<" ";
}
---

Iterator

for(auto it=st.begin();it!=st.end();it++)
{
    cout<<*it<<" ";
}
---
19. 
**Lower Bound ⭐⭐⭐**
Returns first element
>= x
auto it=st.lower_bound(5);
Example
1 3 5 7 9
lower_bound(4)
↓
5
---
20.
**Upper Bound ⭐⭐⭐**
Returns first element > x
auto it=st.upper_bound(5);
Example
1 3 5 7 9
upper_bound(5)
↓
7
---
21. 
**Swap**
st1.swap(st2);
swap(st1,st2);
---
22. 
**Copy**
set<int> st2=st;
---
23. 
**Maximum Element**

*st.rbegin();
---
24. 
**Minimum Element**

*st.begin();
---
25. 
**Previous Iterator**
auto it=prev(st.end());
cout<<*it;
Last element.
---
26. 
**Next Iterator**
auto it=next(st.begin());
---
27. 
**Distance**
distance(st.begin(),it);
---
28. 
**Equality**
if(st1==st2)
---
29.
** Merge**
st1.merge(st2);
---
30. 
**Extract**
auto node=st.extract(5);
---
31. 
**Contains (C++20)**
st.contains(5);
---
32. 
**Pair Set**
set<pair<int,int>> st;
st.insert({2,3});
st.insert({1,5});

Automatically sorted by
first
↓
second
---
33. 
**Nested Set**
set<set<int>> st;
---
34. 
**Set of Vector**
set<vector<int>> st;
Useful in
3Sum
4Sum
---
35. 
**Convert Vector → Set**

vector<int> v={1,2,3};
set<int> st(v.begin(),v.end());
---
36. 
**Convert Set → Vector**
vector<int> v(st.begin(),st.end());
---
37.
**Reverse Traversal**

for(auto it=st.rbegin();it!=st.rend();it++)
{
    cout<<*it;
}
---
38. 
**Duplicate Insertion**

st.insert(10);
st.insert(10);
Result
10
Only one copy.
---
39. 
**Remove Duplicate from Vector**
set<int> st;
for(int x:v)
{
    st.insert(x);
}
---
40. 
**Custom Comparator**
Ascending
set<int> st;
Descending
set<int,greater<int>> st;
---
Time Complexity

# Operation	      Time
 insert()	      O(log n)
 emplace()	      O(log n)
 erase()	      O(log n)
 find()	          O(log n)
 count()          O(log n)
 lower_bound()    O(log n)
 upper_bound()    O(log n)
 size()	          O(1)
 empty()	      O(1)
 clear()	      O(n)
---

⭐ Most Important Operations for DSA

set<int> st;

# // Insert
st.insert(x);

# // Delete
st.erase(x);

# // Find
st.find(x);

# // Count
st.count(x);

# // Lower Bound
st.lower_bound(x);

# // Upper Bound
st.upper_bound(x);

# // Size
st.size();

# // Empty
st.empty();

# // Clear
st.clear();

# // Traverse
for(auto x:st)

# // Iterator
st.begin();
st.end();

# // Reverse
st.rbegin();
st.rend();

# // Smallest element
*st.begin();

# // Largest element
*st.rbegin();


---

🎯 For NeetCode 150, memorize these first

These cover almost every set usage you'll encounter:

✅ insert()

✅ erase()

✅ find()

✅ count()

✅ lower_bound()

✅ upper_bound()

✅ begin()

✅ end()

✅ rbegin()

✅ rend()

✅ size()

✅ empty()

✅ clear()

✅ Range-based for loop

✅ *begin() (minimum element)

✅ *rbegin() (maximum element)


These are the operations most frequently used in interview questions and competitive programming.