#include <iostream>
#include <cmath>

int main() {
  int C=0,A,B;
  std::cout << "Enter Charge A and B value: \n";
  std::cin >> A >> B;

  std::cout << "\nCharging...... \n\n";
  C = abs(A-B);
  std::cout << C <<"%..Charge is required!!\n";

  if(C>=0 && C<=10){
    std::cout <<"8 Mins Required\n\n";
  }
  else if(C>=11 && C<=50){
    std::cout <<"6 Mins Required\n\n";
  }
  else{
     std::cout <<"4 Mins Required\n\n";
  }
  std::cout <<"Phone Charged..pls Unplug!!\n";
}