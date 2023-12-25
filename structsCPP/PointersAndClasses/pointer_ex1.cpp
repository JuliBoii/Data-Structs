#include <iostream>

int main() {
  //  int num1 = 11;
  //  int num2 = num1;

  int *num1 = new int(11);
  int *num2 = num1;

  *num1 = 22;

  std::cout << *num1 << std::endl;
  std::cout << *num2 << std::endl;
  return 0;
}