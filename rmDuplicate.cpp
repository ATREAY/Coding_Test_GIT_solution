#include <iostream>
#include <bits/stdc++.h>

void rmDuplicates(std::string str){
  std::vector <char> v;
  
  for(int i=0; i<str.size(); i++){
    v.push_back(str[i]);

    if(v.size() > 2){
      int sz = v.size();
      
      for(int j=1; j<sz; j++){
        if(v[sz - j] == v[sz - (j+1)] &&
           v[sz - (j+1)] == v[sz - (j+2)]){
              v.resize(sz - (j+2));
              }
        else{
          if(v[sz - j] == v[sz - (j+1)]){
                  v.resize(sz-j);
                }
          }
            }    
          }
        }
    
  
  std::cout<<"Resultant string is: \n";
  for(int i=0; i<v.size(); i++){
    std::cout<<v[i];
  }
  std::cout<<"\n";
  
}

int main() {
  std::string str;
  std::cout<<"Enter the string: \n";
  getline(std::cin,str);
  rmDuplicates(str);
}