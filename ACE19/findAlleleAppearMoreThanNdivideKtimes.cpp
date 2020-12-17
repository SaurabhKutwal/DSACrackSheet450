#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin >> n >> k;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  unordered_map<int,int> freq;
  for(int i=0;i<n;i++){
    freq[arr[i]]++;
  }
  int t = n/k;
  for(auto x:freq){
    if(x.second > t){
      cout << x.first << " ";
    }
  }
  cout << endl;
  return 0;
}
