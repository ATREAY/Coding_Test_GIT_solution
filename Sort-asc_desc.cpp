#include <iostream>
#include <bits/stdc++.h>

void printsort(int a[], int n){
  
  std::sort(a,a+n);

  for(int i=0; i<n/2; i++){
    std::cout<<a[i]<<" ";
  }
  for(int j=n-1; j>=n/2; j--){
    std::cout<<a[j]<<" ";
  }
  
}

int main() {
  int a[10],n=0;
  std::cout << "Enter Size: \n";
  std::cin>>n;
  for(int i=0; i<n; i++){
    std::cin>>a[i];
  }
  std::cout << "Sorted Array is: \n";
  printsort(a,n);
  
  
}