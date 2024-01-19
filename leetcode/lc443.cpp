#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
//1.18
int compress(vector<char>& chars){
    int n=chars.size();
    if(n==1){
        return n;
    }
    int write=0;
    int read=0;
    while(read<n){
        char currentChar=chars[read];
        int cnt=0;
        while(read<n && chars[read]==currentChar){
            cnt++;
            read++;
        }
        chars[write++]=currentChar;
        if(cnt>1){
            for(auto c:std::to_string(cnt)){
                chars[write++]=c;
            }
        }
    }
    return write;

}
int main(){

    return 0;
}