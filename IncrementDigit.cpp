#include <iostream>

int main() {
  int n, m=0, a; 
  std::cout << "Enter the number\n";
  std::cin>>n;

  while(n){
    a = n%10;
    a++;
    m = m*10 + a;
    n /= 10;
  }
  n = m;
  m = 0;
  while(n){
    a = n%10;
    m = m*10 + a;
    n /= 10;
  }
  std::cout<<"Incremented number is - \n"<<m<<"\n";
}