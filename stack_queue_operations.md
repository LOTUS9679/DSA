
1. ✅ stack
2. ✅ queue
3. ✅ deque
4. ✅ priority_queue (Max Heap & Min Heap)
---
1. 
**STACK (stack)**

Header
#include <stack>
Declaration
stack<int> st;
stack<char> st;
stack<string> st;
---
**Push**.   st.push(10);
---
**Emplace** st.emplace(20);
---
**Top**.  st.top();
---
**Pop** st.pop();
---
**Size** st.size();
---
**Empty** st.empty();
---
**Swap**
st1.swap(st2);
swap(st1,st2);
---
# Time Complexity
Operation	Complexity
push()	    O(1)
emplace()	O(1)
pop()	    O(1)
top()	    O(1)
size()	    O(1)
empty()	    O(1)
---
2. 
**QUEUE (queue)**

Header
#include <queue>
---
Declaration
queue<int> q;
queue<char> q;
---
**Push** q.push(10);
---
**Emplace** q.emplace(20);
---
**Pop** q.pop();
---
**Front** q.front();
---
**Back** q.back();
---
**Size** q.size();
---
**Empty** q.empty();
---
**Swap**
q1.swap(q2);
swap(q1,q2);
---
# Time Complexity
Operation	Complexity
push()	    O(1)
pop()	    O(1)
front()	    O(1)
back()	    O(1)
size()	    O(1)
empty()	    O(1)
---
3. 
**DEQUE (deque)**

Header
#include <deque>
---
**Declaration** : deque<int> dq;
---
**Push Front** : dq.push_front(10);
---
**Push Back**  : dq.push_back(20);
---
**Emplace Front** : dq.emplace_front(30);
---
**Emplace Back** : dq.emplace_back(40);
---
**Pop Front** : dq.pop_front();
---
**Pop Back** : dq.pop_back();
---
**Front** : dq.front();
---
**Back** : dq.back();
---
**Access**. : dq[i];
            : dq.at(i);
---
**Insert** : dq.insert(dq.begin()+2,100);
---
**Erase** : dq.erase(dq.begin()+2);
---
**Clear** : dq.clear();
---
**Size** : dq.size();
---
**Empty** : dq.empty();
---
**Begin** : dq.begin();
---
**End** : dq.end();
---
**Reverse Begin** : dq.rbegin();
---
**Reverse End** : dq.rend();
---
**Traverse**
for(auto x:dq)
{
    cout<<x;
}
---
 # Time Complexity

Operation	    Complexity

push_front()	O(1)
push_back()	    O(1)
pop_front()	    O(1)
pop_back()	    O(1)
front()	        O(1)
back()	        O(1)
random access	O(1)
---
4. 
## PRIORITY QUEUE (MAX HEAP)

**Declaration**
priority_queue<int> pq;
---
**Push** : pq.push(10);
---
**Emplace** : pq.emplace(20);
---
**Top** :pq.top();
Largest element.
---
**Pop** : pq.pop();
---
**Size** : pq.size();
---
**Empty** : pq.empty();
---
**Swap** : pq1.swap(pq2);
---
 # Time Complexity
Operation	 Complexity
push()	     O(log n)
emplace()	 O(log n)
pop()	     O(log n)
top()	     O(1)
size()	     O(1)
empty()	     O(1)
---
5. 
# PRIORITY QUEUE (MIN HEAP)

**Declaration**
priority_queue<int,vector<int>,greater<int>> pq;

Everything else is identical:
pq.push(x);
pq.pop();
pq.top();
pq.size();
pq.empty();
---
Common DSA Examples
Stack
stack<int> st;
st.push(10);
st.push(20);
cut<<st.top();
st.pop();
---
Queue
queue<int> q;
q.push(10);
q.push(20);
cout<<q.front();
q.pop();
---
Deque
deque<int> dq;
dq.push_front(1);
dq.push_back(2);
dq.pop_front();
dq.pop_back();
---
Max Heap
priority_queue<int> pq;
pq.push(5);
pq.push(2);
pq.push(10);
cout<<pq.top();
Output
10
---
Min Heap
priority_queue<int,vector<int>,greater<int>> pq;
pq.push(5);
pq.push(2);
pq.push(10);
cout<<pq.top();
Output
2
---
⭐ Operations You Must Memorize for DSA
Stack
push()
emplace()
pop()
top()
size()
empty()
swap()
Queue
push()
emplace()
pop()
front()
back()
size()
empty()
swap()

# Deque

push_front()
push_back()
emplace_front()
emplace_back()
pop_front()
pop_back()
front()
back()
insert()
erase()
clear()
size()
empty()
begin()
end()
rbegin()
rend()

# Priority Queue

push()
emplace()
pop()
top()
size()
empty()
swap()

These operations cover essentially everything you'll need for the vast majority of DSA problems on NeetCode, LeetCode, and competitive programming.