#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int m;
  cin >> m;
  int arr2[m];
  for(int i=0;i<m;i++){
    cin >> arr2[i];
  }

  int i=0,j=0;
  while(i<n && j<m){
    if(arr[i] == arr[i-1] && i!=0){
      i++;
    }
    else if(arr2[j] == arr2[j-1] && j!=0){
      j++;
    }
    else if(arr[i] < arr2[j]){
      i++;
    }
    else if(arr2[j] < arr[i]){
      j++;
    }
    else if(arr[i] == arr2[j]){
      cout << arr[i] << " ";
      i++;
      j++;
    }
  }

  return 0;
}
