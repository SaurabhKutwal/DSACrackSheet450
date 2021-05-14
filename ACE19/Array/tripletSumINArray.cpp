#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n,x;
    cin >> n >> x;
    int arr[n];
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
      cin >> arr[i];
      mp[arr[i]] = 1;
    }
  int flag = 0;
  int found = 0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j] >= x){
        flag = 1;
        break;
      }
      if(mp[x-(arr[i]+arr[j])] == 1){
        flag = 1;
        found = 1;
        break;
      }
    }
    if(flag == 1){
      break;
    }
  }
  if(found == 1){
    cout << 1 << endl;
  }
  else{
    cout << 0 << endl;
  }
}
  return 0;
}
