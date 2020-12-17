#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,k;
  cin >> n >> m >> k;
  int arr1[n],arr2[m],arr3[k];
  for(int i=0;i<n;i++){
    cin >> arr1[i];
  }
  for(int i=0;i<m;i++){
    cin >> arr2[i];
  }
  for(int i=0;i<k;i++){
    cin >> arr3[i];
  }
  int i=0,j=0,l=0;
  //logic is that if three are same then print if it is not
  //just increment any one pointer from three array.
  while(i<n && j<m && l<k){
    if(arr1[i] == arr1[i-1] && i!=0){
      i++;
    }
    else if(arr2[j] == arr2[j-1] && j!=0){
      j++;
    }
    else if(arr3[l] == arr3[l-1] && l!=0){
      l++;
    }
    else if(arr1[i] == arr2[j] && arr2[j] == arr3[l]){
      cout << arr1[i] << " ";
      i++;
      j++;
      l++;
    }
    else if(arr1[i] < arr2[j]){
      i++;
    }
    else if(arr2[j] < arr3[l]){
      j++;
    }
    else{
      l++;
    }
  }
  return 0;
}
