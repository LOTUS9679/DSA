This is a perfect use case for a reusable note, so here’s a polished Markdown version that you can save directly in your DSA notes.

📌 LeetCode 49 – Group Anagrams

💡 Key Idea

Do NOT use unordered_set.

❌ Why not unordered_set?

unordered_set stores only unique values.

Example:

{"act", "opst", "aht"}

After sorting all strings, different anagrams become the same key.

Example:

Original String	Sorted String
act	act
cat	act
pots	opst
tops	opst
stop	opst
hat	aht

If we use an unordered_set, it stores only:

{"act", "opst", "aht"}

We lose the original strings, so we cannot build the required groups.

⸻

✅ Why use unordered_map<string, vector<string>>?

The map stores:

* Key → Sorted string
* Value → A vector<string> containing all original strings that have the same sorted form.

Example

unordered_map<string, vector<string>> mp;

After processing:

{"act","pots","tops","cat","stop","hat"}

The map becomes:

"act"  -> {"act", "cat"}
"opst" -> {"pots", "tops", "stop"}
"aht"  -> {"hat"}

Notice that vector<string> automatically groups all anagrams having the same sorted key.

⸻

🧠 Algorithm

1. Create an unordered_map<string, vector<string>>.
2. Traverse every string.
3. Make a copy of the string.
4. Sort the copied string.
5. Use the sorted string as the key.
6. Push the original string into the vector corresponding to that key.
7. Traverse the map.
8. Push every vector<string> into the final answer.

⸻

✅ C++ Code

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;
        for (int i = 0; i < strs.size(); i++)
        {
            string key = strs[i];
            sort(key.begin(), key.end());
            mp[key].push_back(strs[i]);
        }
        for (const auto &x : mp)
        {
            result.push_back(x.second);
        }
        return result;
    }
};

⸻

⏱️ Complexity

* Time Complexity: O(n × k log k)
    * n = Number of strings
    * k = Average length of each string
* Space Complexity: O(n × k)

⸻

⭐ Important Interview Notes

* unordered_set is useful only for storing unique values.
* unordered_map is useful for mapping keys to values.
* vector<string> inside the map automatically stores all original strings that belong to the same anagram group.
* The sorted string acts as a unique identifier (key) for each anagram group.

⸻

🔑 Trick to Remember

Original String
       │
       ▼
Sort Characters
       │
       ▼
Use Sorted String as Key
       │
       ▼
unordered_map<string, vector<string>>
       │
       ▼
Automatically Groups All Anagrams









FOR OPTIMAL SOLUTION 

This is a great note to keep in your DSA revision folder. Here’s a concise, interview-focused Markdown version.

📌 Group Anagrams (Frequency Array Approach)

💡 Core Idea

Instead of sorting each string, create a frequency array of size 26.

Each frequency array acts as a unique signature (key) for an anagram group.

Example:

eat  -> a=1, e=1, t=1
tea  -> a=1, e=1, t=1
ate  -> a=1, e=1, t=1

All three strings generate the same frequency key, so they belong to the same group.

⸻

🧠 Why Frequency Array?

Sorting each string requires:

O(k log k)

Counting character frequencies requires:

O(k)

where k = length of the string.

Thus, the frequency-array approach is more efficient.

⸻

📦 Data Structure Used

unordered_map<string, vector<string>> mp;

* Key → Frequency string (signature)
* Value → All original strings having the same frequency

Example:

Key
#1#0#0#0#1...#1...
↓
{"eat","tea","ate"}

⸻

🔑 Algorithm

1. Traverse every string.
2. Create a frequency array of size 26 initialized to 0.
3. Count the frequency of each character.
4. Convert the frequency array into a unique string (key).
5. Insert the original string into:

mp[key].push_back(str);

6. Traverse the map.
7. Store every vector<string> into the final answer.

⸻

⭐ Why use ‘#’ while creating the key?

Without separators:

1 11  → 111
11 1  → 111

Collision occurs.

Using separators:

#1#11
#11#1

Both keys become unique.

⸻

📌 Important Line

mp[key].push_back(str);

If the key does not exist,

* a new vector<string> is created automatically.

Otherwise,

* the string is appended to the existing vector.

Example:

eat
↓
Key
↓
{"eat"}
----------------
tea
↓
Same Key
↓
{"eat","tea"}
----------------
ate
↓
Same Key
↓
{"eat","tea","ate"}

⸻

⏱️ Complexity

Operation	Complexity
Count Frequency	O(k)
Build Key	O(26) ≈ O(1)
Insert into Map	O(1) Average

Overall:

Time  : O(n × k)
Space : O(n × k)

where

* n = Number of strings
* k = Average string length

⸻

📝 Interview Tip

There are two common solutions:

1️⃣ Sorting Approach

* Signature = Sorted String
* Time = O(n × k log k)

2️⃣ Frequency Array Approach ✅

* Signature = Character Frequency
* Time = O(n × k)
* Faster because sorting is avoided.

⸻

🔥 Memory Trick

String
   │
   ▼
Count 26 Characters
   │
   ▼
Generate Frequency Key
   │
   ▼
unordered_map
(Key → vector<string>)
   │
   ▼
All Anagrams Grouped Together



 class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string, vector<string>> mp;

        for (string str : strs)
        {
            vector<int> freq(26, 0);

            for (char ch : str)
            {
                freq[ch - 'a']++;
            }

            string key = "";

            for (int i = 0; i < 26; i++)
            {
                key += "#" + to_string(freq[i]);
            }

            mp[key].push_back(str);
        }

        vector<vector<string>> result;

        for (const auto &x : mp)
        {
            result.push_back(x.second);
        }

        return result;
    }
};
</mark>


