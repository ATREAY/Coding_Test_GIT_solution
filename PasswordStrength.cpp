#include <iostream>
#include <bits/stdc++.h>
//using namespace std;

void checkPasswords(std::string& input){
  int n = input.length();

  bool haslower = false, hasupper = false;
  bool hasdigit = false, hasspecial = false;
  std::string normchars = "abcdefghijklmnopqrstuvwxzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

  for(int i=0; i<n; i++){
    if(islower(input[i])){
        haslower = true;
    }
    else if(isupper(input[i])){
        hasupper = true;
    }
    if(isdigit(input[i])){
        hasdigit = true;
    }
  }

  size_t special = input.find_first_not_of(normchars);
  if(special != std::string::npos){
    hasspecial = true;
  }

  std::cout<<"Entered password is: \n";
  if(haslower && hasupper && hasdigit && hasspecial && n>=8){
    
      std::cout<<"Strong!!\n";
  }
  else if(haslower && hasupper && hasdigit && n>=8){
    
      std::cout<<"Modarate!!\n";
  }
  else if(haslower && hasupper && n>=8){
    
      std::cout<<"Weak!!\n";
  }
  else
    if(n<8)
      std::cout<<"Password Should be of Minimum 8 Charecters\n";
    else
      std::cout<<"Wrong Format\n";
}

int main() {
  std::string input;
  std::cout<<"Enter Password..\n";
  getline(std::cin, input);
  checkPasswords(input);
}