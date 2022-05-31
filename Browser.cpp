#include <iostream>
#include<bits/stdc++.h>

class Node{
public:
    std::string link;
    Node *left = NULL;
    Node *right = NULL;

    Node(std::string l){
      link = l;
    } 
};

class browser{
public:
  std::string gotofunc(std::string link, Node *&curr){
        Node *temp = new Node(link);
        if(curr == NULL){
            curr = temp;
        }
        else{
          curr->right = temp;
          temp->left = curr;
          curr=temp;
        }
      return curr->link;
    }

  std::string backwardfunc(Node *&curr){
      if(curr==NULL || curr->left==NULL){
          return "HOME";
      }
      curr = curr->left;
      return curr->link;
  }

  std::string forwardfunc(Node *&curr){
      if(curr->left==NULL && curr->right==NULL){
          return "HOME";
      }
      if(curr->right==NULL){
        return curr->link;
      }
      curr = curr->right;
      return curr->link;
  }
};

int main() {
  int n=0;
  std::cin>>n;
  Node *curr  = NULL;
  browser b;
  curr = new Node("HOME");
  
  for(int i=0; i<n; i++){
    std::string input;
    std::cin>>input;

    if(input=="forward"){
        std::cout<<b.forwardfunc(curr)<<"\n";
    }
    else if(input=="backward"){
        std::cout<<b.backwardfunc(curr)<<"\n";
    }
    else{
        std::string link;
        std::cin>>link;
        std::cout<<b.gotofunc(link,curr)<<"\n";
    }
  }
}