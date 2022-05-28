#include <iostream>

int main() {
  int i,j,k,l,n;
  std::cout << "Enter Size:\n";
  std::cin>>n;

  for(i=1; i<n+1; i++){
    for(k=1; k<=i; k++){
      std::cout<< k<< " ";
      }
    for(l=i-1; l>=1; l--){
      std::cout<< l<< " ";
    }
    std::cout<< "\n";
  }
}
