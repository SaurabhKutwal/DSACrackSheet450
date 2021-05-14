#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  unordered_map<char,int> cnt;
  for(int i=0;i<s.size();i++){
    cnt[s[i]]++;
  }
  for(auto itr:cnt){
    if(itr.second > 1){
      cout << itr.first << ":" << itr.second << endl;
    }
  }
  return 0;
}
