#include <iostream>

signed long long n0 = 0;
signed long long n1 = 1;

signed long long n(signed long long n0, signed long long n1) {
  return 34 * n1 - n0 + 2;
}

int main(){
  signed long long result = n(n0, n1);
  std::cout << result << std::endl;
  return 0;
}
