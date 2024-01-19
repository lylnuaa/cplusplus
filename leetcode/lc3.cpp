#include <iostream>
#include <unordered_map>
using namespace std;
int lengthOfLongestSubstring(string s){
    unordered_map<char,int> dic;
    int l=-1,r=0,res=0,len=s.size();
    while(r<len){
        if(dic.find(s[r])!=dic.end())
            l=max(l,dic.find(s[r])->second);
        dic[s[r]]=r;
        res=max(res,r-l);
        r++;
    }
    return res;
}
int main(){
    string s="abcabcbb";
    cout<<lengthOfLongestSubstring(s)<<endl;
    return 0;
}