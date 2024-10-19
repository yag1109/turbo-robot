#include<iostream>

using namespace std;

void bubbleSort(int n,int *A){
  int i,j;
  for(i=0;i<n-1;i++){
    int isSorted=1;
    for(j=0;j<n-i-1;j++){
      if(A[j]>A[j+1]){
        int temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
        isSorted=0;
      }
    }
    if(isSorted) return;
  }
}


int main(){
  int n;
  cout<<"Enter size of array : ";
  cin>>n;
  int *A = new int [n];
  for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<" ";
    cin>>A[i];
  }
  cout<<"Unsorted Array : ";
  for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
  bubbleSort(n,A);
  cout<<"Sorted Array : ";
  for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;  

}
