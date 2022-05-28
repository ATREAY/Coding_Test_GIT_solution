#include <iostream>

int main() {
  int a, m[10], n, s, j=0;
  std::cout << "Enter the number: \n";
  std::cin >>n;
  std::cout << "Enter size: \n";
  std::cin >>s;
  

  while(n){
    a = n%10;
    j = j*10 + a;
    n /= 10;
  }
  n = j;
  j=0;
  
  for(int i=0; i<s; i++){
    a = n%10;
    if(i==0)
      m[i] = a*1000;
    else if(i==1)
      m[i] = a*100;
    else if(i==2)
      m[i] = a*10;
    else if(i==3)
      m[i] = a*1;
    else
      break;
    n /= 10;
  }

  std::cout<<"Result is: \n";
    
  for(int i=0; i<s; i++){
    std::cout<<m[i]<<"\n";
  }
  
}