#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int flag = 0;
  for(int i=n-1;i>=1;i--){
    if(arr[i]>arr[i-1]){
      swap(arr[i],arr[i-1]);

      flag = 1;
      break;
    }
  }
  if(flag == 0){
    reverse(arr,arr+n);
  }
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
