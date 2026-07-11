# Declaration
vector<int>v;
vector<int>v(5);
vector<int>v(5,10);
vector<string>s
vector<char>c;
vector<pair<int,int>>p;

# INITIALIZARION:
vector<int>v={1,2,3,4};
vector<int>v{1,2,3,4};
vector<int>v(n);
vector<int>v(n,100);

# Acess Element
v[i];
v.at(i);
v.front(); cout<< v.front();
v.back();  cout<< v.back();

# Insert
v.push_back();
v.emplace_back(); //fatser then pushback;

**insertion at place**
v.insert(v.begin()+,100);

**insert at multiple element**
v.insert(v.begin()+1,3,50);

**Insert Another Vector**
v1.insert(v1.end(),v2.begin(),v2.end());

# DELETE
v.pop_back(); delete the last element 
v.erase(v.begin()+2);  erase of one  element;
v.erase(v.begin()+2,v.begin()+5);
v.clear(); clear;
v.size();  size;
v.capacity(); capacity;
v.empty(); return true or false
# RESIZE
v.resize(10);
v.resize(10,100);
# Assign
v.assign(5,20);
Result 20 20 20 20 20
# SWAP
v1.swap(v2);
swap(v1,v2);
# Itretor
v.begin(); //beginning
v.end();   //end
v.rbegin();//reverse begin
v.rend();  //reverse end
# TRAVERSAL
//normal traversal
for(int i=0;i<v.size();i++)
{
   cout<<v[i];
}
//range based
for(auto x:v){
    cout<< x;
}
//Itretor
for(auto it=v.begin();it!=v.end();it++)
{
   cout<<*it;
}
# SORT
//asending
sort(v.begin(),v.end());
//desending
sort(v.rbegin(),v.rend());
//custom
sort(v.begin(),v.end(),greater<int>());
# REVERSE
reverse(v.begin(),v.end());
# MAXIMUM
max_element(v.begin(),v.end());
# MINIMUM
min_element(v.begin(),v.end());
# SUM
accumulate(v.begin(),v.end());
required header #include<numeric>
# count
count(v.begin(),v.end(),5);
return of 5s;
# Find
find(v.begin(),v.end(),5);
example 
if(find(v.begin(),v.end(),5)!=v.end())
# binary search
binary_search(v.begin(),v.end(),5);
vector mustbe sorted 
# LOWER BOUND
lower_bound(v.begin(),v.end(),5);
return itretor 
lower_bound(v.begin(),v.end(),5)-v.begin();
# UPPER BOUND
upper_bound(v.begin(),v.end(),5);
# COPY
ector<int> v2=v;
# FILL
fill(v.begin(),v.end(),10);
# UNIQUE
sort(v.begin(),v.end());
v.erase(unique(v.begin(),v.end()),v.end());
Removes duplicates.
# ROTATE
rotate(v.begin(),v.begin()+2,v.end());
# PERMUTATION
next_permutation(v.begin(),v.end());
prev_permutation(v.begin(),v.end());
# HEAP
make_heap(v.begin(),v.end());
push_heap(v.begin(),v.end());
pop_heap(v.begin(),v.end());
sort_heap(v.begin(),v.end());
# COMPARISION
if(v1==v2)
Lexicographical comparison
if(v1<v2)
# NESTED VECTOR
vector<vector<int>> graph;
graph.push_back({1,2,3});
aph[i][j];
# 2D VECTOR
vector<vector<int>> grid(n,vector<int>(m,0));
# PAIR VECTOR
ector<pair<int,int>> vp;
vp.push_back({1,2});
vp.emplace_back(3,4);
Access
vp[i].first
vp[i].second
# RESERVE MEMORY
v.reserve(100000);
# SHRINK CAPACITY
v.shrink_to_fit();




