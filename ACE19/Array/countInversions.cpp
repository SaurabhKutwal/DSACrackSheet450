#include<bits/stdc++.h>
using namespace std;
int max_size = 0;
int total = 0;
int mergeSort(int arr[],int beg,int mid,int end){
  int flag = 0;
  int count = 0;
  int i=beg,j=mid,k=end;
  int temp[end+1];
  
  int index = 0;
  while(i<=mid && j<=end){
    if(arr[i]<arr[j]){
      temp[index] = arr[i];
      i++;
    }
    else{
      // if(flag == 0){
      //   count+=(mid-i+1);
      //   flag = 1;
      // }
      count = count + (mid-i);
      temp[index] = arr[j];
      j++;
    }
    index++;
  }
  if(i>mid){
    while(j<=end){
      temp[index] = arr[j];
      j++;
      index++;
    }
  }
  else{
    while(i<=mid){
      temp[index] = arr[i];
      index++;
      i++;
    }
  }
  j = 0;
  for(int i=beg;i<=end;i++){
    arr[i] = temp[j];
    j++;
  }
  return count;
}
void merge(int arr[],int beg,int end){
  if(beg<end){
    int mid = (beg+end)/2;
    merge(arr,beg,mid);
    merge(arr,mid+1,end);
    total = total + mergeSort(arr,beg,mid+1,end);
  }
}
int main(){
  int n;
  cin >> n;
  max_size = n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  merge(arr,0,n-1);
  cout << total << endl;
  // for(int i=0;i<n;i++){
  //   cout << arr[i] << " ";
  // }
  return 0;
}
