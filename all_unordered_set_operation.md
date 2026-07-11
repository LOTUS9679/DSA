
1. 
**Header**
#include <unordered_set>
---
2. 
**Declaration**

unordered_set<int> st;
unordered_set<char> st;
unordered_set<string> st;
---
3. 
**Initialization**

unordered_set<int> st = {1,2,3,4,5};
---
4. 
**Insert**
st.insert(10);
st.insert(20);
st.insert(30);

Time Complexity

Average O(1)
Worst O(n)
---
5. 
**Emplace**
st.emplace(40);
Constructs the element directly.

---
6. 
**Find**
st.find(10);
Example
if(st.find(10)!=st.end())
{
    cout<<"Found";
}
Not found
if(st.find(10)==st.end())
{
    cout<<"Not Found";
}
---
7. 
**Count**

st.count(10);

Returns

1 → Present
0 → Absent

Example
if(st.count(10))
---
8. 
**Erase by Value**
st.erase(10);
---
9. 
**Erase by Iterator**

auto it=st.find(20);
st.erase(it);
---

10. 
**Clear**

st.clear();
Deletes all elements.
---

11. 
**Size**
st.size();
---

12. 
**Empty**
st.empty();

Returns
true
false
---
13.
**Traverse**
**Range Based**
for(auto x:st)
{
    cout<<x<<" ";
}
---
**Iterator**
for(auto it=st.begin();it!=st.end();it++)
{
    cout<<*it<<" ";
}
---
14. 
**Begin**
st.begin();
Returns iterator to first element.
---
15. 
**End**
st.end();
---
16. 
**Bucket Count**
st.bucket_count();
Returns number of buckets.
Rarely used in DSA.
---

17. 
**Bucket Size**
st.bucket_size(0);
---
18. 
**Bucket**
st.bucket(10);
Returns bucket number.
---
19. 
**Load Factor**
st.load_factor();
---
20. 
**Max Load Factor**
st.max_load_factor();
---
21. 
**Reserve**
st.reserve(1000);
Useful in competitive programming.
---
22. 
**Rehash**
st.rehash(100);
Changes bucket count.
---
23. 
**Swap**
unordered_set<int> st1;
unordered_set<int> st2;
st1.swap(st2);
swap(st1,st2);
---
24. 
**Copy**
unordered_set<int> st2=st;
---
25. 
**Equality**
if(st1==st2)
---
26. 
**Duplicate Insertion**
st.insert(10);
st.insert(10);
Result
10
Only one copy exists.
---
27. 
**Remove Duplicate from Vector**
unordered_set<int> st;
for(int x:v)
{
    st.insert(x);
}
---
28. 
**Convert Set → Vector**
vector<int> v(st.begin(),st.end());
---
29. 
**Convert Vector → Set**
unordered_set<int> st(v.begin(),v.end());
---
30. 
**Frequency Check**
if(st.find(x)!=st.end())
---
31. 
**Membership Test**
if(st.count(x))
or
if(st.find(x)!=st.end())
---
32. 
**STL Function**
Maximum
max(a,b);
Minimum
min(a,b);
Swap
swap(a,b);
---
Time Complexity Table
# Operation	Average	Worst
# insert()	   O(1) 	O(n)
# emplace()   O(1)	    O(n)
# erase() 	   O(1)	    O(n)
# find()	       O(1)	    O(n)
# count() 	   O(1)	    O(n)
# size()	       O(1)	    O(1)
# empty()	       O(1)	    O(1)
# clear()  	   O(n)	    O(n)
---
Operations Used Most in DSA (Memorize These)
unordered_set<int> st;
# // Insert
st.insert(x);
# // Remove
st.erase(x);
# // Find
st.find(x);
# // Count
st.count(x);
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

---

⭐ NeetCode 150 Priority

For the NeetCode roadmap, you only need these 95% of the time:

insert()

erase()

find()

count()

size()

empty()

clear()

begin()

end()

