#include <iostream>

int main() {
  int a, n, count=0;
  std::cout << "Enter Digit\n";
  std::cin>>n;

  while(n){
    a = n%10;
    count++;
    n /= 10;
  }
  std::cout<<"No of digits in the number are: \n"<<count;
}