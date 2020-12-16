// kth minimum element
#include<bits/stdc++.h>
using namespace std;
int minheap[100];
int currIndex = -1;

void bubbledown(int index){
  int parentIndex = index;
  int leftChildIndex = (2*parentIndex)+1;
  int rightChildIndex = (2*parentIndex)+2;
  int smallest = parentIndex;

  if(leftChildIndex <= currIndex && minheap[leftChildIndex] < minheap[parentIndex]){
    smallest = leftChildIndex;
  }
  if(rightChildIndex <= currIndex && minheap[rightChildIndex] < minheap[smallest]){
    smallest = rightChildIndex;
  }

  if(smallest != parentIndex){
    swap(minheap[smallest],minheap[parentIndex]);
    bubbledown(smallest);
  }
}
int extract(){
  int min = minheap[0];
  minheap[0] = minheap[currIndex];
  bubbledown(0);
  currIndex--;
  return min;
}
void bubbleUp(int index){
  int parentIndex = (index-1)/2;
  int currIdx = index;
  while(minheap[parentIndex] > minheap[currIdx]){
    swap(minheap[parentIndex],minheap[currIdx]);
    currIdx = parentIndex;
    parentIndex = (currIdx-1)/2;
  }
}
void insert(int ele){
  currIndex++;
  minheap[currIndex] = ele;
  bubbleUp(currIndex);
}
void createHeap(int size,int arr[]){
  for(int i=0;i<size;i++){
    insert(arr[i]);
  }
}
int main(){
  int n , k;
  cin >> n >> k;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }

  createHeap(n,arr);
  for(int i=0;i<n;i++){
    cout << minheap[i] << " ";
  }
  cout << endl;

  for(int i=1;i<=k;i++){
    cout << extract() << endl;
  }
  return 0;
}
