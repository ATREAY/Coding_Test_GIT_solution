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
  
  if(n>=8){
    std::cout<<"Entered password ***** is \n";
    if(haslower && hasupper && hasdigit && hasspecial){
      
        std::cout<<"Strong!!\n";
    }
    else if(haslower && hasupper && hasdigit){
      
        std::cout<<"Modarate!!\n";
    }
    else if(haslower && hasupper){
      
        std::cout<<"Weak!!\n";
    }
    else{
        std::cout<<"Wrong Format\n";
      }
  }
  else
    std::cout<<"Password Should be of minimum 8 charecters.\n";
}

int main() {
  std::string input;
  std::cout<<"Enter Password..\n";
  getline(std::cin, input);
  checkPasswords(input);
}