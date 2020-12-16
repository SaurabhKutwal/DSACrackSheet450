#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }

  int left=0,right=n-1;
  while(left <= right){
    if(arr[left]<0 && arr[right]<0){
      left++;
    }
    else if(arr[left]<0 && arr[right]>0){
      left++;
      right--;
    }
    else if(arr[left]>0 && arr[right]<0){
      swap(arr[left],arr[right]);
      left++;
      right--;
    }
    else if(arr[left]>0 && arr[right]>0){
      right--;
    }
  }

  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }
  return 0;
}
