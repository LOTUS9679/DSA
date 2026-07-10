#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:

    string encode(vector<string>& strs) 
    {
       string encoded="";
       for(const string& str : strs)
       { 
         encoded+=to_string(str.length())+"#"+str;
       }
       return encoded;
    }
    vector<string> decode(string s) 
    {
      vector<string>result;
      size_t i=0;
      while(i<s.length())
      {
        size_t j=s.find('#',i);
        string length_str=s.substr(i,j-i);
        int len=stoi(length_str);

        string word=s.substr(j+1, len);
        result.push_back(word);
        i=j+1+len;
      }
      return result;
    }
};
int main()
{
    Solution sol;
    vector<string> strs = {"Hello", "World"};

    string encoded = sol.encode(strs);

    cout << "Encoded String: " << encoded << endl;

    vector<string> decoded = sol.decode(encoded);

    cout << "Decoded Strings:" << endl;

    for(string x : decoded)
    {
        cout << x << endl;
    }

    return 0;

}