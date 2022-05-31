#include <iostream>
#include<bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::vector<std::string> v;
  
  for(int i=0; i<n; i++){
    std::string s;
    std::cin>>s;
    v.push_back(s);
  }

  std::vector<std::string> v1;
  
  for(int i=int('A'); i<=int('Z'); i++){
    for(int j=0; j<v.size(); j++){
      if(v[j][0] == char(i)){
        v1.push_back(v[j]);
      }
    }
  }
  for(auto i:v1){
    std::cout<<i<<", ";
  }
}