#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin >> n >> m;
  int arr[n];
  int arr2[m];
  int Final[n+m];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  for(int i=0;i<m;i++){
    cin >> arr2[i];
  }
  int i=0,j=0,k=0;
  while(i<n && j<m){
    if(arr[i]<arr2[j]){
      Final[k] = arr[i];
      k++;
      i++;
    }
    else if(arr[i]>arr2[j]){
      Final[k] = arr2[j];
      j++;
      k++;
    }
    else if(arr[i] == arr2[j]){
      Final[k] = arr[i];
      k++;
      Final[k] = arr[i];
      k++;
      i++;
      j++;
    }
  }
  if(i>=n){
    while(j<m){
      Final[k] = arr2[j];
      j++;
      k++;
    }
  }
  else{
    while(i<n){
      Final[k] = arr[i];
      k++;
      i++;
    }
  }
  for(int i=0;i<m+n;i++){
    cout << Final[i] << " ";
  }
  return 0;
}
