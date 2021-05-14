#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s;
  int r = s.size()-1;
  int l = 0;
  while(l<r){
    swap(s[l],s[r]);
    l++;
    r--;
  }
  cout << s << endl;
  return 0;
}
